#include<stdio.h>
int main(){
  //  char a[6]={'I', 's', 'l', 'a', 'm'};    //no gurantee + NULL er jnno extra space

//    char a[6]="Islam\0";
//    char a[6]="Islam";
    char a[]="Islam";

    printf("%s\n", a);

 //   int sz= sizeof(a)/sizeof(char);
  //  printf("%d", sz);

    return 0;
}

