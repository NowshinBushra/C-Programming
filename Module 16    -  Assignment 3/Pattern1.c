#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=n-1, k=1;

    for(int i=1; i<=(2*n)-1 && n<=100; i++)
    {

         for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            if(i%2==1){
                printf("#");
            }
            else{
                printf("-");
            }
         }

        if(i<n){
         s--;
         k+=2;
        }
        else{
          s++;
          k-=2;
        }
        printf("\n");
    }

    return 0;
}
