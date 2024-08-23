#include<stdio.h>

void fun(int x)
{
    x =100;
    printf("Fun er X er value: %d\n", x);
}
int main()
{
    int x= 200;
    fun(x);
    printf("NOW Fun er X er value: %d\n", x);
    printf("Main er X er value: %d\n", x);

    return 0;
}
