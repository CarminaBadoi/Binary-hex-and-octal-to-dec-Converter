#include <math.h>

void convert_hex_to_dec(int number) {
    int i=0,remaining,sum=0;

    while(number>0) {
        remaining = number %10;
        number/=10;
        sum += remaining * pow(16,i);
        i++;


    }
    printf("Decimal:%d\n",sum);
    }
