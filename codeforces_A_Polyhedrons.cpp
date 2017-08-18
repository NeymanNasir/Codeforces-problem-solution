#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,faces,i,sum;
    char str[100];
    char *T="Tetrahedron";
    char *C="Cube";
    char *O="Octahedron";
    char *D="Dodecahedron";
    char *I="Icosahedron";
    scanf("%d",&n);
    for(i=0,sum=0;i<n;i++){
        scanf(" %[^\n]",str);

    if(strcmp(str,T)==0){
        faces=4;
    }
    if(strcmp(str,C)==0){
        faces=6;
    }
    if(strcmp(str,O)==0){
        faces=8;
    }
    if(strcmp(str,D)==0){
        faces=12;
    }
    if(strcmp(str,I)==0){
        faces=20;
    }
    sum=sum+faces;

    }

    printf("%d\n",sum);

    return 0;

}
