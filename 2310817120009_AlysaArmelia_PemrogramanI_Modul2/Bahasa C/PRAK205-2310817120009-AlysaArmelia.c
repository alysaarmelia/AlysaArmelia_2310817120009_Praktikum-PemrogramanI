#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    int k;
    int l;
    scanf("%d %d", &a, &b);
    c=sqrt(pow(b,2)-pow(a,2));
    k=a + b + c;
    l=0.5*c*a;
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %d cm^2\n\n", l);
    return 0;
}