#include <bits/stdc++.h>
using namespace std;

void find_missing_letter(const string &s)
{
   vector<bool>letter(26,false);

   for(char c:s)
   {
       letter[c-'a']= true;
   }
   for(char c='a';c<='z';c++)
   {
       if(!letter[c-'a'])
       {
           cout<<c<<endl;
           return;
       }
   }
   cout<<"None"<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s;
    cin>>s;

    find_missing_letter(s);

    return 0;
}
