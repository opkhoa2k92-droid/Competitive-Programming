#include <bits/stdc++.h>
#define int long long
#define __ThanhKhoa signed main  
using namespace std;
 
__ThanhKhoa() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        vector <int> a (3);
        cin >> a[0] >> a[1] >> a[2];
        sort (a.begin() , a.end());
        if ( a[0] + 1 == a[1] && a[1] == a[2] - 1) cout << "YES" << '
';
        else cout << "NO" << '
';
    }
}