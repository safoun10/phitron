#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int c = ceil(4.01);
    int f = floor(1.9999);
    int s = sqrt(10);
    int p = pow(3, 2);  // pow(base, power);
    int a = abs(-5);    // abs = |value|
    int r = round(3.5); // rounds up to ceil if >=.5 or floors it
    
    printf("%d %d %d %d %d %d", c, f, s, p, a, r);
    return 0;
}