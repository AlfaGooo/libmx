#include "../inc/libmx.h"

void mx_print_unicode(wchar_t c) {  
    if (c < 128) {
        char res = c;
        write(1, &res, sizeof(res));
    }
    else if (c < 2048) {
        unsigned char res[2];
        res[0] = (c >> 6 & 0x1f) | 0xc0 ; //b2 31 to 192
        res[1] = (c >> 0 & 0x3f) | 0x80; //b1 63 to 128
        write(1, res ,sizeof(res));
    }
    else if (c < 65536) {
        unsigned char res[3];
        res[0] = (c >> 12 & 0x0f) | 0xe0; // 15 to 224
        res[1] = (c >> 6 & 0x3f) | 0x80; 
        res[2] = (c >> 0 & 0x3f) | 0x80;
        write(1, res, sizeof(res));
    }
    else if (c < 1114112) {
        unsigned char res[4];
        res[0] = (c >> 18 & 0x07) | 0xf0; // 7 to 240
        res[1] = (c >> 12 & 0x0f) | 0x80; // 15 to 128
        res[2] = (c >> 6 & 0x3f) | 0x80;  //63 to 128
        res[3] = (c >> 0 & 0x3f) | 0x80; //63 to 128
        write(1, res, sizeof(res));
    }
}


static void print_unicode(int c, int a, int b, int i) {
    char s;

    for (int j = i; j >= 0; j--) {
        s = 0;
        s = j == i ? (char)((c >> (6 * j)) & a) | b : (char)((c >> (6 * j)) & 63) | 128;
        write(1, &s, 1);
    }
}

void mx_print_unicode(wchar_t c) {
    if (c < 128)
        write(1, &c, 1);
    else if (c < 2048)
        print_unicode((int)c, 31, 192, 1);
    else if (c < 65536)
        print_unicode((int)c, 15, 224, 2);
    else
        print_unicode((int)c, 7, 240, 3);
}