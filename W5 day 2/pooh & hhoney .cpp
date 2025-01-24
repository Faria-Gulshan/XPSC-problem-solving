#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;

    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=3*x)
        {
            cnt += a[i]-3*x;
        }
        else{
            cnt += a[i]%x;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
