#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, x;
    int c = 0;
    scanf("%d", &num);
    while(num!=0){
        x = num%10;
        if(x == 7)
            c++;
        num = num/10;

    }

    printf("%d", c);
    return 0;
}
