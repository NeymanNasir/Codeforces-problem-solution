#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    int cases, n1 = 0, n2 = 0, flg = 0, i;
    string team[101], team1, team2;
    cin >> cases;

    for(int i = 1; i <= cases; i++)
    {
        cin >> team[i];
        if(i == 1) team1 = team[i];
        if(flg == 0 && team[i] != team1)
        {
            flg = 1;
            team2 = team[i];
        }
    }

    for(i = 1; i <= cases; i++)
    {
        if(team[i] == team1) n1++;
    }
    n2 = cases - n1;

    if(n1 > n2) cout << team1 << endl;
    else cout << team2 << endl;

    return 0;
}
