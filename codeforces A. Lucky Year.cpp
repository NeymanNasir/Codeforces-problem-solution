#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
   int n, ans, mainn, i, l;
    scanf("%d", &n);
    mainn = n;
        l = 0;
        while(n>0){
            l++;
            n /= 10;
        }
        for(i = 0, ans = 1; i < l-1; i++) ans *= 10;
        printf("%d\n",ans - mainn % ans);
    return 0;
}
