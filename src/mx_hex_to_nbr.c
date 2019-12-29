#include "../inc/libmx.h"

// static unsigned long mx_aud(const char *hex, unsigned long dig, unsigned long result, int pow);

// unsigned long mx_hex_to_nbr(const char *hex) {
//     int pow = 0;
//     unsigned long dig = 0;
//     unsigned long result = 0;

//     for (int i = 0; hex[i]; i++, pow++);
//     for (int i = 0; i < pow; i++) {
//         if (hex[i] >= 97 && hex[i] <= 122)
//             dig = hex[i] - 87;
//         else if (hex[i] >= 65 && hex[i] <= 90)
//             dig = hex[i] - 55;
//         else
//             dig = hex[i] - 48;
//         for (int j = 1; j < pow - i; j++) {
//             if (i == (pow - 1))
//                 dig *= 1;
//             else
//                 dig *= 16;
//         }
//         result += dig;
//     }
//     return result;
// }

// uint32_t hex2int(char *hex) {
//     uint32_t val = 0;
//     while (*hex) {
//         // get current character then increment
//         uint8_t byte = *hex++; 
//         // transform hex character to the 4bit equivalent number, using the ascii table indexes
//         if (byte >= '0' && byte <= '9') byte = byte - '0';
//         else if (byte >= 'a' && byte <='f') byte = byte - 'a' + 10;
//         else if (byte >= 'A' && byte <='F') byte = byte - 'A' + 10;    
//         // shift 4 to make space for new digit, and add the 4 bits of the new digit 
//         val = (val << 4) | (byte & 0xF);
//     }
//     return val;
// }


int hexadecimalToDecimal(char hexVal[]) 
{    
    int len = mx_strlen(hexVal);
      
    // Initializing base value to 1, i.e 16^0 
    int base = 1; 
      
    int dec_val = 0; 
      
    // Extracting characters as digits from last character 
    for (int i=len-1; i>=0; i--) 
    {    
        // if character lies in '0'-'9', converting  
        // it to integral 0-9 by subtracting 48 from 
        // ASCII value. 
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
                  
            // incrementing base by power 
            base = base * 16; 
        } 
  
        // if character lies in 'A'-'F' , converting  
        // it to integral 10 - 15 by subtracting 55  
        // from ASCII value 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
          
            // incrementing base by power 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 



int hexadecimalToDecimal(char hexVal[]) {    
    int len = mx_strlen(hexVal); 
    int base = 1;
    int dec_val = 0; 

    for (int i = len - 1; i >= 0; i--) {    
        if (hexVal[i] >= '0' && hexVal[i] <= '9') { 
            dec_val += (hexVal[i] - 48) * base;
            base = base * 16; 
        } 
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') { 
            dec_val += (hexVal[i] - 55) * base;
            base = base * 16;
        }
    }
    return dec_val; 
}

int main()
{
    char *c = "0x7D";
    int a = hexadecimalToDecimal(c);
    printf("%d", a);
}

