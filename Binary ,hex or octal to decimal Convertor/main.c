#include <stdio.h>
#include <stdlib.h>
#include "convert_binary_to_dec.c"
#include "convert_hex_to_dec.c"
#include "convert_octal_to_dec.c"

//Convert a binary ,hexadecimal or octal number to a decimal number
int main()
{ int binary,hex,octal;

    printf("Binary number :");
    scanf("%d",&binary);
    convert_binary_to_dec(binary);
    printf("\n");

    printf("Hexadecimal number :");
    scanf("%d",&hex);
    convert_hex_to_dec(hex);
    printf("\n");

    printf("Octal number:");
    scanf("%d",&octal);
    convert_octal_to_dec(octal);
    printf("\n");




    return 0;
}
