#include<stdio.h>

    int sum(int x, int y){
        int sum=x+y;
        return sum;
    }

    int main(){
        int ans = sum(10,20);
        printf("%d\n", ans);
    // OR,,
        printf("%d\n", sum(10,20));
        printf("%d\n", sum(100,200));
        printf("%d\n", sum(45,85));

    // OR,,
        int a,b;
        scanf("%d %d", &a,&b);
        printf("%d\n", sum(a,b));
        return 0;
    }


////OR,,--------------------------

    int sum(int x, int y);

   int main(){
        int ans = sum(10,20);
        printf("%d\n", ans);
        printf("%d\n", sum(10,20));
        printf("%d\n", sum(100,200));
        printf("%d\n", sum(45,85));

    return 0;
    }
    int sum(int x, int y)
    {
        int sum=x+y;
       return sum;
    }
