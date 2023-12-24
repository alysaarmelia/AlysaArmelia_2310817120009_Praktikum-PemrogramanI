#include <stdio.h>

int main()
{
    int nilai;
    char bilangan;

    scanf("%d %c", &nilai, &bilangan);

    for(int l = 1; l <= 50; ++l){

        if (l % nilai == 0){
            printf("%c ", bilangan);

        } else {
        printf("%d ", l);
        }
    }
return 0;
}
