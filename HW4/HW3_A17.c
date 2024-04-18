

#include <stdio.h>
int main(void)

{
    int a;
    scanf ("%d", &a);
    if (a>11 || a<3)
        printf ("winter");
    else if (a<6)
        printf ("spring");
    else if (a<9)
        printf ("summer");
    else
        printf ("autumn");

    return 0;
}

