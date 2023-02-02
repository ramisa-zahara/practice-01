#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
   long long a,b,c,d;
   cin>>a>>b>>c>>d;
   a%=100;
    b%=100;
    c%=100;
    d%=100;
   long long sum= a*b*c*d;
   sum%=100;
   if(sum<10) cout<< "0"<<sum<< "\n";
   else
   cout<< sum << "\n";
    return 0;
}