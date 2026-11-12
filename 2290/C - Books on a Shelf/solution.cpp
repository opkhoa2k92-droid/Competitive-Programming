#include <bits/stdc++.h>
#define int long long
#define __ThanhKhoa signed main 
#define pb push_back
using namespace std;
 
__ThanhKhoa() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector <int> a ( n + 1 );
        for ( int i = 1 ; i <= n ; i++ ) cin >> a[i];
        int res = 0;
        sort (a.begin() + 1, a.end());
        vector <bool> check (n + 1 , true);
        vector <int> arr;
        arr.pb(0);
        int last = 0;
        for (int i = 1 ; i <= n ; i++ ) {
            if ( a[i] > last ) {
                check[i] = false;
                res ++;
                arr.pb(a[i]);
                last = a[i];
            }
        }
        last = 1e18;
        for (int i = n ; i >= 1 ; i -- ) {
            if ( check[i] ) {
                if (a[i] < last ) {
                    res ++;
                    last = a[i];
                }
                arr.pb(a[i]);
            }
        }
        cout << res << '
';
        for (int i = 1 ; i <= n ; i++ ) cout << arr[i] << " ";
        cout << '
';
    }
}