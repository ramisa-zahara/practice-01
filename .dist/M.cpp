#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char c;
    cin>> c;
    if(c >= 'a'  && c<='z')
        cout<< "ALPHA\nIS SMALL" << "\n";
    else if(c >= 'A'  && c<='Z')
        cout<< "ALPHA\nIS CAPITAL" << "\n";
    else
        cout<< "IS DIGIT" << "\n";
}