#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int i = 1, res = 1;
    scanf("%d %d", &x, &y);
    while(i <= y)
    {
        res = res*x;
        i ++;
    }
    printf("%d\n", res);
    return 0;
}
