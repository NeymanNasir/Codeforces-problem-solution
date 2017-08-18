//according to group solution
//codeforces div-1 (A)

#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

#define LL long long
vector<LL> save[13];


LL inter(LL l1, LL r1, LL l2, LL r2)
{
    LL l = max(l1, l2);
    LL r = min(r1, r2);

    if(l > r) return 0;
    else return (r-l+1);
}

int main()
{
    int i, j, k;
    LL mult = 10;

    save[1].push_back(4);
    save[1].push_back(7);
    for(i = 2; i < 10; i++){
            printf("%d\n", save[i-1].size());
        for(j = 0; j < save[i-1].size(); j++){
            save[i].push_back(mult*4 + save[i-1][j]);
        }

        for(j = 0; j < save[i-1].size(); j++){
            save[i].push_back(mult*7 + save[i-1][j]);
        }
        mult *= 10;
    }
    save[i].push_back(4*mult + save[i-1][0]);

    LL l, r;
    scanf("%I64d %I64d", &l, &r);

    LL last = -1, ans = 0;
    for(i = 1; i <= 10; i++){
        for(j = 0; j < save[i].size(); j++){
            ans += inter(last+1, save[i][j],l,r) * save[i][j];
            last = save[i][j];
        }
    }

    printf("%I64d\n", ans);


    return 0;
}
//could't understand the logic of this code
