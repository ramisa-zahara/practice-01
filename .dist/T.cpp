#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
      b[i]=a[i];}
    sort(a,a+3);
    for(int i=0;i<3;i++)
        cout<< a[i]<<"\n";
        cout<< "\n";
    for(int i=0;i<3;i++)
        cout<< b[i]<<"\n";

    return 0;
}