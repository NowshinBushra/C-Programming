#include<stdio.h>

int func(char a[], int i)
{
    if(a[i]=='\0') return 0;
    int len=func(a,i+1);
    return len+1;
}
int main()
{
    char a[6]="Hello";
    int length=func(a,0);
    printf("%d\n",length);
    return 0;
}
