#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n, sum, x, t;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld", &n);
    x = (sqrt(1+8*n)-1) / 2;
    printf("%lld\n", x);
    }

    return 0;
}
