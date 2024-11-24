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
        long long k;
        cin>>n>>k;
        int a[n],h[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>h[i];
        }
        int l = 0, fruit_sum = 0, max_length = 0;

        for (int r = 0; r < n; ++r)
        {
            fruit_sum += a[r];

            while (l < r && (h[r - 1] % h[r] != 0 || fruit_sum > k))
            {
                fruit_sum -= a[l];
                ++l;
            }

                if (fruit_sum <= k && (r == l || h[r - 1] % h[r] == 0))
                {
                    max_length = max(max_length, r - l + 1);
                }

        }
        cout<<max_length<<endl;

    }

            return 0;
        }
