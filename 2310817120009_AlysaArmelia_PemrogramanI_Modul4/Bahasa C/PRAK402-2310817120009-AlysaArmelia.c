#include <stdio.h>

int main()
{
    int bilangan;
    int k;
    int z;

    scanf("%d", &bilangan);

    for (k = 1; k <= bilangan; ++k){

      if (k % 2 == 1){
        printf("%d ", k);
      }
    }

printf("\n");

    for (z = bilangan; z >= 1; --z){

        if(z % 2 == 0){
            printf("%d ", z);
        }
    }
return 0; 
}
