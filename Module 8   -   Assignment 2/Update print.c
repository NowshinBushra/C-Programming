#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i <n && n<= 100000; i++)
    {
        scanf("%d", &A[i]);
    }

    int X, V;
    scanf("%d %d", &X, &V);

    if(X<n && V<=100){
        A[X]=V;
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(A[i]>=1 && A[i]<=100){
            printf("%d ", A[i]);
        }
    }

    return 0;
}
