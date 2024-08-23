#include<stdio.h>

int count_before_one(int A[], int n)
{
    int count=0;
    for(int i =0; i<n && n<=1000; i++){
        if(A[i]==1)
        break;
        count=count+1;
    }
    return count;

}
int main()
{
    int n;
    scanf("%d",&n);

    int A[n];
    for(int i =0; i<n; i++){
        scanf("%d", &A[i]);
    }
    int ans = count_before_one(A,n);
    printf("%d", ans);
    return 0;
}
