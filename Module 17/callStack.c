#include<stdio.h>

void world()
{
    printf("World start\n");
    printf("World end\n");
}
void hello()
{
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main End\n");

    return 0;
}
