#include <bits/stdc++.h>
using namespace std;
int count_digit(int n)
{
    if(n==0)
    return 1;

    int count_dig=0;

    while(n>0)
    {
        n=n/10;
        count_dig++;
    }
    return count_dig;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>>x;

    int num=count_digit(x);

   if(num>0)
   {
     for(int i=0;i<4-num;i++)
     {
         cout<<"0";
     }
   }

    cout<<x<<endl;
    return 0;
}
