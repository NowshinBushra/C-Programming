#include<stdio.h>
#include<math.h>

#include<stdlib.h>   //abs() function er jonno

int main(){
    double x;
    scanf("%lf", &x);
    int ans1 = ceil(x);
    int ans2 = floor(x);
    int ans3 = round(x);
    printf("%d %d %d\n", ans1, ans2, ans3);

    double y;
    scanf("%lf", &y);
    double ans4 = sqrt(y);
    printf("%0.2lf\n", ans4);

    double a,b;
    scanf("%lf %lf", &a,&b);
    double ans5= pow(a,b);  // int ans5= pow(a*1.0, b*1.0); //jodi int diye kori
    printf("%0.2lf\n", ans5);

    int z;
    scanf("%d", &z);
    int ans6 = abs(z);
    printf("%d", ans6);

    return 0;
}
