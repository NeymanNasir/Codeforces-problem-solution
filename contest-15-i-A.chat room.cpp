#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    char word[101];
    int len, h = 0, e = 0, l = 0, o = 0;

    cin >> word;

    len = strlen(word);

    for(int i = 0; i < len; i++)
    {
        if(word[i] == 'h' && h == 0 && e == 0 && l == 0 && o == 0) h++;
        else if(word[i] == 'e' && h == 1 && e == 0 && l == 0 && o == 0) e++;
        else if(word[i] == 'l' && h == 1 && e == 1 && l == 0 && o == 0) l++;
        else if(word[i] == 'l' && h == 1 && e == 1 && l == 1 && o == 0) l++;
        else if(word[i] == 'o' && h == 1 && e == 1 && l == 2 && o == 0) o++;
    }

    if(h+e+l+o == 5) printf("YES\n");
    else printf("NO\n");

    return 0;
}
