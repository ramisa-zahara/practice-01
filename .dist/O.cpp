#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    char s;
    cin>> a >>s >>b;
    if( s== '+')
    cout<< a+b << "\n";
    if( s=='-')
    cout<< a-b << "\n";
    if( s=='*')
    cout<< a*b << "\n";
    if( s=='/')
    cout<< a/b << "\n";
    return 0;
}