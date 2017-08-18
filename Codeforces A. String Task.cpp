#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;

int main()
{
    string word;
    int i, l;

    cin >> word;

    l = word.size();

    for(i = 0; i < l; i++)
    {
       if(word[i]>='A' && word[i]<='Z') word[i] += 32;
    }

    for(i = 0; i < l; i++)
    {
        if(word[i]=='a' ||word[i]=='e' ||word[i]=='i' ||word[i]=='o' ||word[i]=='u'||word[i]=='y') continue;
        else printf(".%c", word[i]);
    }
    printf("\n");
}

