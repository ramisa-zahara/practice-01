#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    long double x,y;
    cin>>x>>y;

    if(x==0.0 && y==0.0)
        printf("Origem\n");

    else if(x==0.0)
        printf("Eixo Y\n");

    else if(y==0.0)
        printf("Eixo X\n");

    else if(x>0.0 && y>0.0)
        printf("Q1\n");

    else if(x<0.0 && y>0.0)
        printf("Q2\n");

    else if(x<0.0 && y<0.0)
        printf("Q3\n");

    else if(x>0.0 && y<0.0)
        printf("Q4\n");


    return 0;
}