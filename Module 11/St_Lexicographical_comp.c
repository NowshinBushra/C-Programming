#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

     int ans= strcmp(a,b);
    printf("%d\n", ans);
    if(ans<0){
            printf("A choto");
        }
        else if(ans>0){
            printf("B choto");
        }
        else{
            printf("Same\n");
        }

/*---------    int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("Same");
            break;
        }
        else if(a[i]=='\0'){
            printf("A choto");
            break;
        }
        else if(b[i]=='\0'){
            printf("B choto");
            break;
        }

        if(a[i] == b[i] ){
            i++;
       }
        else if(a[i] < b[i]){
            printf("A choto");
            break;
        }
        else  {
            printf("b choto");
            break;
        }
    }            -------------*/
    return 0;
}

