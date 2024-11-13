#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
vector<char>s(n);
for(int i=0;i<n;i++)
{
    cin>>s[i];
}

    int l = -1, r = -1;
  // int  i=-1;

    for (int i=0;i<n;i++)
    {

     if(s[i]=='B')

     {
         if(l==-1)
         {
             l=i;
         }
         r=i;
     }

    }
    cout<<l<<" "<<r;

    return 0;
}
