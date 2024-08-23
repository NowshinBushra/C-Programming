#include<stdio.h>

int main()
{
    int K,N;
    scanf("%d %d", &N,&K);

    for(int j=1; j<=N && N <= 100;  j++){
    for(int i=1; i<=K && K <= 100;  i++){
    printf("%d ", i);
    }
    printf("\n");
    }




    return 0;
}
