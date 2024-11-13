#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    if(c<a)
        cout<<0<<endl;
    else
        cout<<(c/a)*b<<endl;
    return 0;
}

