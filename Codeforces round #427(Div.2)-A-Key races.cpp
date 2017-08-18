#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int s, v1, v2, t1, t2;
    scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

    int first = (t1+t1) + (s * v1);
    int second = (t2+t2) + (s * v2);

    if(first == second) printf("Friendship\n");
    else if(first < second) printf("First\n");
    else printf("Second\n");

    return 0;

}
