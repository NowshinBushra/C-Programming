#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int n;
        scanf("%d",&n);

        char s[n+1];
        scanf("%s",s);

    int T=0, P=0;
    for(int i=0;i<n; i++)
    {
        if(s[i]=='T'){
            T++;
        }
        else{
           P++;
        }
    }
    if(T>P){
        printf("Tiger\n");
    }
    else if(T<P){
        printf("Pathaan\n");
    }
    else{
        printf("Draw\n");
    }
    }
    return 0;
}
