#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k = 0;
    scanf("%d", &n);
    while (n!=0){
        if (n % 2 == 0){
            k ++;
        }
        n = n / 10;
    }
    printf("%d", k);
    return 0;
}
