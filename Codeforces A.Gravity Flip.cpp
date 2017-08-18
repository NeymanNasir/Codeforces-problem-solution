#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int > na;
    int n, i, a;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a;
        na.push_back(a);
    }

    sort(na.begin(), na.end());

    for(i = 0; i < n; i++)
    {
        printf("%d ", na[i]);
    }
    printf("\n");

    return 0;
}
