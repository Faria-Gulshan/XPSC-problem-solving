#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;
    cin>>x>>y;

    if(y-x>1)
        cout<<y-x+1<<endl;
    else
        cout<<0<<endl;

    return 0;

}
