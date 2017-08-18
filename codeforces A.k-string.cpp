#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
using namespace std;


int main()
{
    string str;
    int l, k, i, j, t;
    int cnt[100] = {0};

    cin >> k >> str;

    l = str.size();

    for(i = 0; i < l; i++) ++cnt[str[i]-'a'];

    for(i = 0; i < 26; i++)
    {
        if(cnt[i]%k != 0){
            puts("-1");
            return 0;
        }
        else cnt[i] /= k;
    }

    for(i = 0; i < k; i++)
    {
        for(j = 0; j < 26; j++)
        {
            for(t = 0; t < cnt[j]; t++)
                printf("%c", j + 'a');
        }
    }
    puts("");

    return 0;
}
