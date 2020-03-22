#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, w1, w2;
    scanf("%d", &n);
    w1 = n/10;
    w2 = n%10;
    if (w1 == w2)
        printf("Same");
    else
        printf("Not the same");
    printf("%d %d", w1, w2);
    return 0;
}
