#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
 }
 for(int i=0; i<N; i++){
        if( A[i]%2==0){
            printf("%d ", A[i]);
        }
        else if( A[i]%3==0){
            printf("%d ", A[i]);
        }

 }
            printf("%d ", A[N]);

    return 0;
}
