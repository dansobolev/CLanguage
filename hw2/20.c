#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0, n, a;
    scanf("%d", &n);
    while (n!=0){
        a = n % 10;
        if (a == 5){
            k ++;
        }
        n = n / 10;
    }
    if (k >= 1)
        printf("Digit 5 is include in this number");
    else
        printf("There is no digit 5 in this number");
    return 0;
}
