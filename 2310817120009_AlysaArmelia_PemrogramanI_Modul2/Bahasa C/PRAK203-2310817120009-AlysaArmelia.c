#include <stdio.h>

int main()
{
    float a;
    float b;
    float i;
    float j;
    float x;
    float y;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &i);
    scanf("%f", &j);
    scanf("%f", &x);
    scanf("%f", &y);

    printf("%.3f", (a-b)*i/j-(x+y));
}