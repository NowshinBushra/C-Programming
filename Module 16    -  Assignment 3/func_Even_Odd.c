#include<stdio.h>

void count_even_odd(void)
{
    int n;
    scanf("%d",&n);

    int A[n];
    for(int i =0; i<n; i++){
        scanf("%d", &A[i]);
    }

    int even=0, odd=0;
    for(int i =0; i<n && n<=1000; i++){

        if(A[i]%2==0){
            even++;
        }

        else{
            odd++;
        }
    }
    printf("%d %d", even, odd);

}
int main()
{
    count_even_odd();

    return 0;
}

