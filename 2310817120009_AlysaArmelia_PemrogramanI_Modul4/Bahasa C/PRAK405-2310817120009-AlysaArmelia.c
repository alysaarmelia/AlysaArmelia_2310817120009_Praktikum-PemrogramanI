#include <stdio.h>

int main()
{
    int m;
    int n;
    int perkalian_kelipatan;

    scanf("%d %d", &m, &n);

    int nilai= 0;

    for (int k = 1; k <= m; k++){

        int keseluruhan = 0;
        for (int l = k; l >= 1; l--)
        {
            perkalian_kelipatan = l * n;
            printf("(%d * %d)", l, n);

            keseluruhan += perkalian_kelipatan;

            if(l > 1){
                printf(" + ");
            }
        }
        printf(" = %d \n", keseluruhan);
        nilai += keseluruhan;
    }
    printf("%d \n", nilai);
return 0;
}
