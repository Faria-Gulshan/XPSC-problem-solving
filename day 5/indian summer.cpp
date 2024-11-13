#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<string, string>> leaves(n);
     string tree, color;
    int cnt=0;

    for (int i = 0; i < n; ++i) {

        cin >> tree >> color;
    }


  for(const auto& i:leaves )
  {
     for(const auto & j:leaves)
     {
         if(i.first==j.first && i.second==j.second)
         {
             leaves.erase(numbers.begin()+j);
         }
     }
  }


    cout << leaves.size() << endl;

    return 0;
}
