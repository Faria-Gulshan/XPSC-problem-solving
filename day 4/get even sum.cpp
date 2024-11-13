#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<long long int>number(n);

    long long int total=0;
    long long int small_odd=1e9+1;

    for(int i=0;i<n;i++)
    {
        cin>>number[i];
        total +=number[i];
        if(number[i]%2!=0)
        {
            if(number[i]<small_odd)
                small_odd=number[i];
        }
    }
    if(total%2==0)
        cout<<total<<endl;
    else
        cout<<total-small_odd<<endl;


    return 0;
}
