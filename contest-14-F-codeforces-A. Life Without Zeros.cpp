#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long int remove_zeros(long long int n)
{
    double num = 0;
    double i = 0;
    while(n != 0)
    {
        int res = n % 10;
        if(res != 0){
            num += (double)res * pow(10, i);
            i++;
        }

        n /= 10;
    }
    return (long long int)num;
}
int main()
{
    long long int a, b, sum;
    scanf("%I64d %I64d", &a, &b);
    sum = a + b;

    if(remove_zeros(a) + remove_zeros(b) == remove_zeros(sum))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
