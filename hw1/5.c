#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int dig1, dig2;
    int dig_1, dig_2;
    scanf("%d", &num);
    dig1 = num/10000; /*1-st digit*/
    dig2 = (num/1000)%10; /*2 digit*/
    dig_1 = num%10;/*5 digit*/
    dig_2 = (num%100)/10;/*4 digit*/

    if(dig1 == dig_1 && dig2 == dig_2)
        printf("%d is a palindrome", num);
    else
        printf("%d is not a palindrome", num);
    return 0;
}
