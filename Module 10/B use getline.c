#include<stdio.h>
#include<string.h>

int main(){
    char s[1000001];
    fgets(s, 100001, stdin);

    for(int i=0; s[i]!='\\'; i++){
        printf("%c", s[i]);
    }

    return 0;
}
