#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double d, v, u;
    int t, i=0;
    scanf("%d", &t);
    while(t--){
       scanf("%lf %lf %lf", &d, &v, &u);
         if(v==0 || u == 0 || v >=u){
        printf("Case %d: can't determine\n",++i);
        continue;
    }
       double fast = d/u;
       double sh = d/sqrt((u*u)-(v*v));
       double diff = sh-fast;
    printf("Case %d: %.3lf\n", ++i, diff);
    }

    return 0;
}
