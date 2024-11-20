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
        cin>>a,b,n,s;

        int x=0;

        for(int i=0;i<a;i++)
        {
           x= x+n ;
           if(x>s)
           {
               x=x-n;
               break;
           }
        }
        if(x+b>=s)
            cout<<"yes"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
