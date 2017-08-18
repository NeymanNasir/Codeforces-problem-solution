#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long int n, k, ans;
    int a;

    cin >> n >> k;

    if(n % 2 == 0){
        if(k > n/2){
            k = k - n/2;
            a = 2;
        }
        else a = 1;
    }
    else
    {
        if(k > n/2 + 1){
            k = k - (n/2 + 1);
            a = 2;
        }
        else a = 1;
    }

    ans = a + (k - 1) * 2;

    cout << ans << endl;

    return 0;
}
