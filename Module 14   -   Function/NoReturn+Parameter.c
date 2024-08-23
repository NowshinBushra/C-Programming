#include<stdio.h>

void sum(int x, int y){
    int ans = x+y;
    printf("%d", ans);
    // return;    (sudhu return lekha jabe)
}

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    sum(a,b);
    return 0;
}
