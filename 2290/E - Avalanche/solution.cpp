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
        int n , k;
        cin >> n >> k;
        vector <int> a (n + 5);
        int res = 0;
        for (int i = 1 ; i <= n ; i++) cin >> a[i];
        vector <int> div (n + 5); 
        for (int i = n ; i >= 1 ; i--) {
            div[i] += div[i+1];
            a[i] += div[i];
            div[max(0LL,i - k - 1)] -= a[i];
            div[i] += a[i];
            res += a[i];
            res %= 2;
            //cout << i << " " << a[i] << '
';
        }
        if (res == 0) cout << "Bob" << '
';
        else cout << "Alice" << '
';
       }
}