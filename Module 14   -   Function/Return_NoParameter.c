#include<stdio.h>
// int sum(void) //OR
   int sum(){
    int a,b;
    scanf("%d %d", &a,&b);
    int s= a+b;
    return s;

}
int main(){

//   printf("%d", sum());
    //OR,,
    int ans = sum();
    printf("%d", ans);

    return 0;
}
