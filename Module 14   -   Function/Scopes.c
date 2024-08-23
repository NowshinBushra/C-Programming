#include<stdio.h>
 // global
  int x= 500;   //ei x globally access kora jabe

void fun(void)
{
    int s =100;
    printf("Fun er S er address: %p\n", &s);
    printf("Global X er address: %p\n", &x);      //same value
}
int main()
{
    int s= 200;
    printf("Main er S er address: %p\n", &s);
    printf("Global X er address: %p\n", &x);      //same value

    fun();
    return 0;
}
