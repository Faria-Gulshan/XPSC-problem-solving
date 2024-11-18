#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int z_group=0, o_group=0;
        char prevchar=s[0];

        if(prevchar == '0') z_group++;
        else o_group++;

        for(int i=1;i<n;i++)
        {
            if(s[i]!=prevchar)
            {
                if(s[i]=='0')z_group++;
                    else o_group++;
                prevchar = s[i];
            }
        }
        cout<<min(z_group, o_group)<<endl;
    }


    return 0;
}
