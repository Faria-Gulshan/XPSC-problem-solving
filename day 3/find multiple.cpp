#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    int x=a%c;
    int y= c-x;


    if(a+y<=b)
        cout<<a+y<<endl;
    else if(a%c==0)
        cout<<a<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
