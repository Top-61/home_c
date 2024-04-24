#include <stdio.h>
int main()
{
    int i, a;

    scanf ("%d", &a);
    if (a<=100)
    for(i=1; i<=a; i++)
        {
            printf ("%d %d %d\n", i, i*i, i*i*i);
        }
    else return 6;
    return 0;
}





