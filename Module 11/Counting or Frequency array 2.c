#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int count[26]={0};
    for(int i=0; i<strlen(s); i++){
        int value= s[i]-'a';
        count[value]++;
    }
    for(int i=0; i<26; i++){
            if(count[i]!=0)
        printf("%c - %d\n", i+'a', count[i]);
    }
/*    for(int i=0; i<strlen(s); i++){
        int value=s[i]-'a';                        //________input er serial wise dekhte chaile
        if(count[value]!=0)
        printf("%c - %d\n", value+'a', count[value]);
        count[value]=0;
    }           */
    return 0;
}
