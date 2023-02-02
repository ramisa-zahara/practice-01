#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int y= a/365;
    a%=365;
    int m= a/30;
    a%=30;
    cout<<y << " years\n";
    cout<< m << " months\n";
    cout<< a << " days\n";


    return 0;
}