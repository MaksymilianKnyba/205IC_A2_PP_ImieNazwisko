#include <stdio.h>

int main() {
    int i = 0;
    float f=1.5;
    double d=2.5;
    char c="c";

    printf("wartość moich zmiennych  i=%i, f=%f, d=%d , c=%c " , i, f, d, c);

    scanf("%i", &i);
    scanf("%f", &f);
    scanf("%d", &d);
    scanf("%c", &c);
    printf("wartość moich zmiennych  i=%i, f=%f, d=%d , c=%c " , i, f, d, c);
    return 0;
}
