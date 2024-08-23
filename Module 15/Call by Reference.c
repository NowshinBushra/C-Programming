#include<stdio.h>

void fun(int* p)
{
    *p =500;
}
int main()
{
    int x= 100;
    printf("Main er X er value: %d\n", x);
    fun(&x);
    printf("NOW Main er X er value: %d\n", x);

    return 0;
}

