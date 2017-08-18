#include<iostream>
#include<cstdio>
using namespace std;

int n, k;
double sum;
int mark;

bool check(int cnt)
{
    int score = (int)(sum / (cnt + n) + 0.5);

    if(score == k) return true;
    return false;
}
int main()
{
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &mark);
        sum += mark;
    }

    int cnt = 0;
    while(!check(cnt)){
        cnt++;
        sum += k;
    }
    printf("%d\n",cnt);
    return 0;
}
