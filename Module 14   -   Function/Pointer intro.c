#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n", &x);

    int *p = &x;
    printf("%p\n", p);

    //dereference
    printf("%d\n", *p);


    // x er value p er maddhome change korte
    *p=500;
    printf("%d\n", x);  //ekhane x=10 change hoye x=500 ashbe

    return 0;
}
