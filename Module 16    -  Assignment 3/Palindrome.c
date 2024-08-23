#include<stdio.h>
#include<string.h>

int is_palindrome(char St[]) {
    int L = strlen(St);
    int i=0, j=L-1;
    for(i=0; i<j; i++){
        if (St[i]!= St[j]) {
            return 0;
        }
        j--;
    }
    return 1;
}
int main()
{
    char S[1000];
    scanf("%s", S);

    int ans = is_palindrome(S);

    if (ans == 1) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}
