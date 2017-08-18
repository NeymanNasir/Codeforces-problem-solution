#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int n, k, sasha = 0, lina = 0;
    scanf("%I64d %I64d", &n, &k);

    int test = n / k;
    if(test % 2 == 0) printf("NO\n");
    else printf("YES\n");

}
