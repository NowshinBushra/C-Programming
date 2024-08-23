#include<stdio.h>
int main()
{
    int n, k=1;
    scanf("%d",&n);

    int s=n-1;

    for(int i=1; i<=n && n<=9; i++){

        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=k; j>=1; j--){
            printf("%d", j);
        }
        s--;
        k++;
        printf("\n");
    }

    return 0;
}

