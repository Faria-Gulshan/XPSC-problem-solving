#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin>>x>>y>>z;

    if(x+y+z==4)
    {
     if(x+y/2>z+y/2)
            cout<<"yes"<<endl;
     else
        cout<<"no"<<endl;
    }
    else{
      int n=4-x-y-z;
      if(x+y/2+n>z+y/2)
        cout<<"yes"<<endl;
      else
        cout<<"no"<<endl;

    }

    return 0;
}
