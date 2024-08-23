#include<stdio.h>

void func(int a[], int n, int i)
{
    if(i==n) return;           // ----> Base case
    printf("%d ", a[i]);
    func(a, n, i+1);
}
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    func(a,n,0);
    return 0;
}
