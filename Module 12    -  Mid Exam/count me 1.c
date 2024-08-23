#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d", &N);

    int A[N];
    int length = sizeof(A) / sizeof(A[0]);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
   int count1=0, count2=0;
    for (int i = 0; i < length; i++)
    {
        if( A[i]%2==0 ){
         count1++;
        }
        else if( A[i]%3==0 ){
         count2++;
        }

    }
        printf("%d %d", count1, count2);

    return 0;
}

