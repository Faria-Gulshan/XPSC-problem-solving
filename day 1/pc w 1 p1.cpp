#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int s = 0, d = 0;
    int l = 0, r = n - 1;
    bool turn_sereja = true;

    while (l <= r) {
        if (v[l] > v[r]) {
            if (turn_sereja) {
                s += v[l];
            } else {
                d += v[l];
            }
            l++;
        } else {
            if (turn_sereja) {
                s += v[r];
            } else {
                d += v[r];
            }
            r--;
        }

        turn_sereja = !turn_sereja;
    }

    cout << s << " " << d << endl;

    return 0;
}
