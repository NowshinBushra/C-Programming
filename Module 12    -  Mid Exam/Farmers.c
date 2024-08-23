#include<stdio.h>

int main()
{
    int test;
    scanf("%d", &test);

    for( int t=1; t<=test && t <= 1000; t++){

        int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);

    if( M1 <= 1000 &&  M2 <= 1000 && D <= 100){

    int D2 = (D*M1)/(M1+M2);
    int ans = D-D2;
    printf("%d", ans);

    printf("\n");
    }

    }

    return 0;
}

