#include<stdio.h>
int main()             //_if sum of two values in an array is equal to the given value or not
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);
    int flag=0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]+a[j]==x){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}
