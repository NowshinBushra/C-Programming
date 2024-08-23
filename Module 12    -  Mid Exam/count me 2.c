#include<stdio.h>
#include<string.h>
int main(){
    char S[100000];
    scanf("%s", S);

    int len= strlen(S);

    int count=0;
    for (int i = 0; i < len && len<=100000; i++)
   {
        if( S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' )
        continue;

        count++;
   }

      printf("%d", count);



    return 0;
}


