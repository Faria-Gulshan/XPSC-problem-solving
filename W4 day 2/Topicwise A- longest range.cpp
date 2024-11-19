#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    long long s;
    cin>>s;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int r=0,l=0,ans=0;
    long long sum =0;
    while(r<n)
    {
        sum += a[r];
        if(sum<=s)
        {
            ans = max(ans,r-l+1);
        }
        else{
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;


    return 0;
}
