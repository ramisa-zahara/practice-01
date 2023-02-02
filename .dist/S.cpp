#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    if(a<0.0 or a>100.0)
        cout<< "Out of Intervals\n";
    else if(a<=25.0)
        cout<< "Interval [0,25]\n";
    else if(a<=50.0)
        cout<< "Interval (25,50]\n";
    else if(a<=75.0)
        cout<< "Interval (50,75]\n";
    else if(a<=100.0)
        cout<< "Interval (75,100]\n";
    return 0;
}