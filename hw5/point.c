#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p_point;
    int num = 100;

    p_point = &num;
    printf("Value - %d, address - %p", *p_point, p_point); //� ������� *p_point ������� �������� �� p_point
    return 0;
}
