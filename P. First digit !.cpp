#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s[0] - '0';

    cout<< (n & 1 ? "ODD" : "EVEN") <<endl;
}
