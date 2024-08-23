#include<stdio.h>
#include<string.h>
int main(){
    char S[10000];
    scanf("%s", S);

    int len= strlen(S);

    int count[26]={0};
    for (int i = 0; i < len && len<=10000; i++)
   {
        int value = S[i]-'a';
        count[value]++;
   }
   for (int i = 0; i < 26; i++)
   {
       if(count[i]!=0){
        printf("%c - %d\n", i+'a', count[i]);
       }
   }





    return 0;
}



