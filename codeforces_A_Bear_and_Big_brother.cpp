#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,year=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a=3*a;
        b=2*b;
        year++;
    }
    printf("%d\n",year);
    return 0;
}
