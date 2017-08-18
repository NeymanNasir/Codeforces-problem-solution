#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    int n, ans, i, j;

    cin >> n;

    if(n % 2 == 0)
        ans = (n*n) / 2;
    else
        ans = (n/2)*(n/2) + (n/2 + 1)*(n/2 + 1);

    cout << ans << endl;


    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1; j <= n/2; j++) printf("C.");
            if(n % 2 != 0) printf("C");
        }
        else
        {
            for(j = 1; j <= n/2; j++) printf(".C");
            if(n % 2 != 0) printf(".");
        }
        printf("\n");
    }

    return 0;

}
