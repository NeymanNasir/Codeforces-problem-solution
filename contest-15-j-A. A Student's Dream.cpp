#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int al, ar, bl, br;

    cin >> al >> ar;
    cin >> bl >> br;

    if((br >= al-1 && br <= al*2+2) || (bl >= ar-1 && bl <= ar*2+2)){
        printf("YES\n");
    }
    else printf("NO\n");

    return 0;
}
