#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y;

    cin>>x>>y;
    int coin_gain=0;

    if(x>=y)
    {
       coin_gain+=x;
       if(x-1>=y)
       {
           coin_gain+=x-1;
       }
       else{
        coin_gain+=y;
       }

    }
    else{
        coin_gain+=y;
        if(y-1>=x)
        {
            coin_gain+=y-1;
        }
        else{
            coin_gain+=x;
        }
    }

    cout<<coin_gain<<endl;

  return 0;
}
