#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n, a, b, pb[1001], pa[1001], i, cnt, j;

    scanf("%d",&n);
    for(i=0,cnt=0; i<n; i++){
        scanf("%d %d",&pb[i],&pa[i]);

        if(pb[i] - pa[i] == 0) cnt++;

    }

    if( cnt != n){
        printf("rated\n");
    }
    else{
        for(i=0; i<n; i++){
            for(j=i; j<n-1; j++){
                if(pb[j] == pb[j+1] && pa[j] == pa[j+1]){
                    printf("maybe\n");
                    return 0;
                }
            }
        }
    printf("unrated\n");
}

    return 0;
}
//vul ase......
