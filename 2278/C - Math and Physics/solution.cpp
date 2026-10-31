#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
 
using namespace std;
 
__ThanhKhoa () {
    cin.tie (0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector <int> a ( n + 1);
        for (int i = 1 ; i <= n ; i++) cin >> a[i];
        int incl = 0;
        int sum = 0;
        for  ( int i = 2 ; i < n ; i ++ ) {
            sum += a[i];
            if ( a[i] == 1 ) incl++;
        }
        if (incl == n - 2 && a[1] == 1 && a[n] == 1) sum = -1;
        else if (incl == n - 2) sum = (a[1] + a[n] - 1);
        else sum += ( a[1] + a[n] - 1);
        cout << sum << '
';
    }
}