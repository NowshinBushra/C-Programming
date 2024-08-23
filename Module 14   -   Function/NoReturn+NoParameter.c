#include<stdio.h>
void sum(void){
    int a,b;
    scanf("%d %d", &a, &b);
    //OR,,
    int a = 10, b = 10;
    int ans = a+b;
    printf("%d", ans);
}

int main(){
    sum();
    sum();
    sum();       //multiple times input data niye output pawa jay
    return 0;
}
