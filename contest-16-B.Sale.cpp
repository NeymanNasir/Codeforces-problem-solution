#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n, m, cost[2001], earn = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    sort(cost, cost+n);

    for(int i = 0; i < m; i++)
    {
        if(cost[i] > 0) break;
        else cost[i] = abs(cost[i]);

        earn += cost[i];
    }

    cout << earn << endl;

    return 0;
}
