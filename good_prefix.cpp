
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    
    }
    
    long long sum=0;
    long long max_n=0;
    long long good_prefix=0;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
        max_n=max(max_n,(long long) a[i]);
        
        if(2*max_n == sum)
        {
            good_prefix++;
        }
    }
    cout<<good_prefix<<endl;
}
    return 0;
}
