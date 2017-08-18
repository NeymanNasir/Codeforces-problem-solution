#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n, k, a, candies = 0, ans = -1, give = 0, i;
    cin >> n >> k;

    for(i = 1; i <= n; i++)
    {
        cin >> a;
        candies += a;
        if(candies <= 8)
        {
            give += candies;
            candies = 0;
        }
        else
        {
            give += 8;
            candies -= 8;
        }
        if(give >= k){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
