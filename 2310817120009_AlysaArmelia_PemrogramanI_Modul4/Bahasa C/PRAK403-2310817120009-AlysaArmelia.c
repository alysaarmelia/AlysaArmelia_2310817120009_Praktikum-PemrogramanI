#include <stdio.h>

int main(){
    int bilangan; 
    int angka;

    scanf("%d %d", &bilangan, &angka);

    int p = bilangan;
    int q = angka;
    
    while(p < angka && q > bilangan)
    {
        printf("%d %d - ", p, q);
        
        p++;
        q--;

        if(p == angka && q == bilangan)
        {
            printf("%d %d ", p, q);
        }
    }
    while(p > angka && q < bilangan)
    {
        printf("%d %d - ", p, q);
        
        p--;
        q++;

        if(p == angka && q == bilangan)
        {
            printf("%d %d ", p, q);
        }
    }
return 0;
}
