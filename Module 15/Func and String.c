#include<stdio.h>
#include<string.h>
void func(char ar[])     // OR,,   void func(char *ar)
{
    printf("%d", strlen(ar));
}
int main()
{
    char ar[20]="hello";
    func(ar);
    return 0;
}
