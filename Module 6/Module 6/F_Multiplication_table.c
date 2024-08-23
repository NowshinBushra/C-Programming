#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <=12; i++)
    {
        if (n>=1 && n<=50)
        {
            printf("%d * %d = %d\n", n, i, n*i);
        }
        
    }
    
    
    return 0;
}