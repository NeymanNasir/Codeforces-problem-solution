#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,d,i,j,scream1[110],scream2[110],ans=0;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);

    for(i=0;i<=100;i++){
        scream1[i]=b+i*a;
        scream2[i]=d+i*c;
    }
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            if(scream1[i]==scream2[j]){
                ans=scream1[i];
                printf("%d\n",ans);
                return 0;
            }
        }
    }
    printf("-1\n");

    return 0;
}
