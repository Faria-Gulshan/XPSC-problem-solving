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

        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        string ans(n,' ');
        int freq[26]= {0};
        char new_char='a';

        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                ans[i]=new_char;
                freq[new_char -'a']++;
                new_char++;
            }
            else
            {


                for(int j=0; j<26; j++)
                {
                    if(freq[j]==a[i])
                    {
                        ans[i]='a'+j;
                        freq[j]++;

                        break;
                    }
                }

            }
        }
        cout<<ans<<endl;
    }


    return 0;
}
