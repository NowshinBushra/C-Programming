#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for( int t=1; t<=test && t <= 1000; t++){
    int n;
    scanf("%d", &n);

    int A[n];
    for(int i=0; i<n;  i++){
    scanf("%d", &A[i]);
    }

    int a;
    scanf("%d", &a);

    int check=0;
    for(int i=0; i<n &&  n <= 10000;  i++){
        if(A[i]==a){
           check=1;
        break;
        }

    }
    if(check){
        printf("YES");
    }
    else {
        printf("NO");
    }
    printf("\n");

    }
    return 0;
}
