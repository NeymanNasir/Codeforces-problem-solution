#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

string reverse_s(string s)
{
    string s1;
    for(int i = s.size()-1; i >= 0; i--)
    {
        s1 += s[i];
    }

    return s1;
}

int main()
{
    string s, t, s1;

    cin >> s;
    cin >> t;

    s1 = reverse_s(s);

    if(s1 == t)printf("YES\n");
    else printf("NO\n");

    return 0;
}
