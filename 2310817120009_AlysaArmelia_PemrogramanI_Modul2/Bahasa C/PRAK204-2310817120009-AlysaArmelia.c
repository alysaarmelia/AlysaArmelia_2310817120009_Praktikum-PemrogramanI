#include <stdio.h>
int main()
{
float j,tb,phi,v,l,k;
phi=22/7.f;
scanf("%f %f", &j,&tb);
v=phi*j*j*tb;
l=(2*phi*j)*(j+tb);
k=(2*phi*j);
printf("Volume = %.2f\n", v);
printf("Luas = %.2f\n", l);
printf("Keliling = %.2f\n\n", k);
}
