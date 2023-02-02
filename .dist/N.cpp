#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char c;
    cin>> c;
    if(c >= 'a'  && c<= 'z')
        printf("%c\n",toupper(c));
    else
        printf("%c\n",tolower(c));
}