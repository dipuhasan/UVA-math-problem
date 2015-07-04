
//10522 - Height to Area
#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T, C = 0;
     double a, b, c;
    scanf("%d", &T);
    while(C!=T){
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a<=0 || b<=0 || c<=0){
        printf("These are invalid inputs!\n");
        C++;
        continue;
    }
    double s = (1/a+1/b+1/c)*(1/b+1/c-1/a)*(1/a+1/c-1/b)*(1/a+1/b-1/c);
    double s1 = 1/s;
    double s2 = sqrt(s1);
    if(s<0){
        printf("These are invalid inputs!\n");
        C++;
    }

    else{
    printf("%0.3lf\n", s2);
    }

  }
    return 0;

}
