#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for( int i=0; i<n; i++){
        scanf("%d", &a[i]);
       }

    int count[7]={0};
    for( int i=0; i<n; i++){
        count[a[i]]++;
       }
    for( int i=0; i<6; i++){
        printf("%d count - %d\n", i, count[i]);
        }

    return 0;
}

