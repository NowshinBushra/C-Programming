#include<stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<c && c>=2; i++){
         printf("%d ", a[r-1][i]);
    }

    printf("\n");

    for(int i=0; i<r && r>=2; i++){
         printf("%d ", a[i][c-1]);
    }

    return 0;
}

