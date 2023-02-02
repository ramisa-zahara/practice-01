#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<min(a,min(b,c))<<" "<<max(a,max(b,c))<< "\n";
}