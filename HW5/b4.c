#include <stdio.h>
int main()
{
    int n, count;

    scanf ("%d", &n);
    count=0;
    while (n!=0)
    {
        count++;
        n=n/10;
    }
    if (count==3)
            printf ("YES");
    else
            printf ("NO");



    return 0;
}



