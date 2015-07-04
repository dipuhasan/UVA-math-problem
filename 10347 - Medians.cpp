#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    double m1, m2, m3, s, H, H1;
    while(scanf("%lf %lf %lf", &m1, &m2, &m3)==3){
      s = (m1+m2+m3)/2.0;
      H = (4.0/3.0)*(sqrt(s*(s-m1)*(s-m2)*(s-m3)));
        //H=(4/3.0)*sqrt(s*(s-m1)*(s-m2)*(s-m3));
        if(H>0){
        printf("%.3lf\n", H);
        }else{
            H = -1;
        printf("%.3lf\n", H);
     }
    }

    return 0;
}
