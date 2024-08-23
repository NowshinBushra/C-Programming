#include<stdio.h>

void func()
{
    printf("fun");
    func();
}
int main()
{
    func();
    return 0;
}
