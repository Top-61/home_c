

#include <stdio.h>
int main(void)
// Сумма длин любых двух сторон треугольника//
//больше длины его третьей AB+BC>AC//
{
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);

    if (a+b>c && b+c>a && a+c>b)
            printf ("YES");

    else printf ("NO");

    return 0;
}

