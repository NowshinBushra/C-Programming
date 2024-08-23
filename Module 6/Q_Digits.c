#include<stdio.h>
int main(){
    int tst;
    scanf("%d", &tst);
    
    for (int i = 0; i < tst; i++)
    {
        int n;
        scanf("%d", &n);
        
        do{
            printf("%d ", n%10);
            n=n/10;
        }
        while (n!=0);
        
        printf("\n");
    }
    
    return 0;
}