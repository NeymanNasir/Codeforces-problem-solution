/*#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int coordinate[10001][10001];

int main()
{
    int cases, x, y, i, j;

    for(i = 2, j = 2; i <= 10000; i++, j++)
    {
        if(j%2 == 0) coordinate[i][j] = i+j;
        else coordinate[i][j] = i+j-1;

        coordinate[i][j-2] = coordinate[i][j]-2;
    }

    cin >> cases;
    while(cases--)
    {
        cin >> x >> y;

        if(x == 0 && y == 0) cout << '0' << endl;
        else if (x == 1 && y == 1) cout << '1' << endl;
        else if (coordinate[x][y] == 0) cout << "No Number" << endl;
        else
            cout << coordinate[x][y] << endl;
    }

    return 0;
}*/
//another optimum solution
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int cases, i, x, y;
    cin >> cases;
    while(cases--)
    {
        cin >> x >> y;

        if(x != y && x-y != 2)
            printf("No Number\n");
        else if(x%2 == 0 && y%2 == 0)
            printf("%d\n", x+y);
        else
            printf("%d\n", x+y-1);

    }
    return 0;
}
