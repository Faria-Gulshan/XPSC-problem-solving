#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;

        long long x= s/n;

      long long y = min(a,x)*n+b;



        if(y>=s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
