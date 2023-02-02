#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin>>a;
    if(ceil(a)==floor(a))
        cout<<"int"<< " " << int(a)<< "\n";
    else
        cout<< "float"<< " "<< int(a)<< " "<<a-int(a)<< "\n";

    return 0;
}