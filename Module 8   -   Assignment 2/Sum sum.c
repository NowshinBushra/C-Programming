#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int V[n];


    for (int i = 0; i < n && n<=100000; i++)
    {
        scanf("%d", &V[i]);
    }
    int sum1=0, sum2=0;
    for (int i = 0; i < n; i++)
    {
        if( V[i]>0 && V[i]<=1000 ){
            sum1=sum1+V[i];
        }
        else if( V[i]<0 && V[i]>=-1000 ){
            sum2=sum2+V[i];
        }
    }
        printf("%d %d", sum1, sum2);

    return 0;
}
