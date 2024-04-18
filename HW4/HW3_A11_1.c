

#include <stdio.h>
#include <inttypes.h>

int main(void)

{
    int32_t a, b, c, d, e, max, min;
    scanf ("%"SCNd32"%"SCNd32"%"SCNd32"%"SCNd32"%"SCNd32,
     &a, &b, &c, &d, &e);

    max = (a>b) ? a : b;
    max = (max>c) ? max : c;
    max = (max>d) ? max : d;
    max = (max>e) ? max : e;

    min = (a<b) ? a : b;
    min = (min<c) ? min : c;
    min = (min<d) ? min : d;
    min = (min<e) ? min : e;

    printf ("%"PRId32"\n", max+min);

    return 0;

}

