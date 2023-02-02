#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
   int a,b,ans;
   char s,q;
   cin>>a>>s>>b>>q>>ans;
   if(s=='+')(a+b==ans)? cout<< "Yes\n": cout<< a+b<<"\n";
   if(s=='-')(a-b==ans)? cout<< "Yes\n": cout<< a-b<<"\n";
   if(s=='*')(a*b==ans)? cout<< "Yes\n": cout<<a*b <<"\n";
    return 0;
}