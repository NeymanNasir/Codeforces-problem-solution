#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n, a, b, c, d;
    int pythagorian_triplet = 0;

    cin >> n;

    for(a = 1; a < n; a++)
    {
        for(b = a+1; b < n; b++)
        {
            d = a*a + b*b;       // here we don't use another loop for C, for been c^2 = a^2 + b^2,
            c = sqrt(d);          // that means a^2+b^2 must be a square number, by using the logic
            if(c*c == d && c <= n) pythagorian_triplet++; //we can solve the program by O(n^2)
        }
    }

    cout << pythagorian_triplet << endl;
    return 0;
}
