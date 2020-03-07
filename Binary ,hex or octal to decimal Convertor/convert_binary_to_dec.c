#include <math.h>
void convert_binary_to_dec(int number) {
    int i,sum=0;
    int remaining, cifra;
    i=0;
    while(number>0) {
         remaining = number%10;
         number=number/10;
         sum += remaining * pow(2,i);
         i++;


    }
    printf("Decimal:%d\n",sum);

}
