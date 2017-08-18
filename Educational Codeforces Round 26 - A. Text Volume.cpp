#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int n, volume, max_volume = 0;
    char str[30000];

    scanf("%d", &n);
    scanf(" %[^\n]", str);
    int len = strlen(str);
    str[len] = '\0';


    for(int i = 0, volume = 0; i <= len; i++){
        if(str[i] >= 'A' && str[i] <= 'Z') volume++;

        if(str[i] == ' ' || str[i] == '\0'){
            if(volume > max_volume) max_volume = volume;
            volume = 0;
        }
    }


    printf("%d\n", max_volume);

    return 0;
}
