#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        if(c>b)
        {
            if(a-1<2*c-b-1)
            {
                cout<<"1"<<endl;
            }
            else if(a-1>2*c-b-1)
            {
                cout<<"2"<<endl;
            }
            else{
                cout<<"3"<<endl;
            }

        }
        else{
            if(a-1<b-1)
            {
                cout<<"1"<<endl;
            }
            else if(a-1>b-1){
                cout<<"2"<<endl;
            }
            else{
                cout<<"3"<<endl;
            }
        }

    }

    return 0;
}
