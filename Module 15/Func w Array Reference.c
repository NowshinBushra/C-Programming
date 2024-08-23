#include<stdio.h>
#include<string.h>
void func(int *ar, int n)     // OR,,   void func(char *ar)
{
    for(int i=0; i<5; i++){
        printf("%d ", ar[i]);    // age eta print hobe
    }
    printf("\n");
    ar[0]=500;                  // then 0 index change hobe
}
int main()
{
    int ar[5]={10,20,30,40,50};
    func(ar,5);

    for(int i=0; i<5; i++){
        printf("%d ", ar[i]);        // last e eta print hobe
    }
    return 0;
}
//---------------------Eta character er khetre
/*
void func(char *ar)     // OR,,   void func(char *ar)
{
        printf("%s ", ar);    // age eta print hobe

    printf("\n");
    ar[0]='G';                  // then 0 index change hobe
}
int main()
{
    char ar[]="Hello";
    func(ar);

        printf("%s", ar);        // last e eta print hobe

    return 0;
}
