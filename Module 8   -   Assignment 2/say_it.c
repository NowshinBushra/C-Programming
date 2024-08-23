#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n && n<=100000; i++)
    {
        printf("%d. I Want More Assignments\n", i);
    }
    return 0;
}
