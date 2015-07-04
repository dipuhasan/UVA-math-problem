
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int x, y, r, T;
    scanf("%d", &T);
    while(T--){
        while(scanf("%d %d %d", &x, &y, &r)==3){
            double cir_radius = sqrt((x*x)+(y*y));
            printf("%.2lf %.2lf\n", r-cir_radius, r+cir_radius);
        }

    }

    return 0;
}
