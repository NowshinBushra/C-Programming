#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int flag=1;
    if(r!=c){
        flag=0;
    }

    for(int i=0; i<r; i++)
    {
         for(int j=0; j<c; j++)
        {
            if(i==j){
                if(a[i][j]!=1){
                   flag=0;
                }
                continue;
            }
            if(i+j==r-1){
                if(a[i][j]!=1){
                   flag=0;
                }
                continue;
            }
            if(a[i][j]!=0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}


