#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, sum;
    while(scanf("%lld %lld", &a, &b)==2){
        if(a==0 && b==0) break;

        int x = abs(a-b);
        int y = sqrt(x);
        sum = 0;
        for(int i = 1; i<=y; i++)
            if(x%i==0)
                sum+=2;
        if(y*y == x)
            sum--;

        printf("%lld\n", sum);
    }


    return 0;
}
