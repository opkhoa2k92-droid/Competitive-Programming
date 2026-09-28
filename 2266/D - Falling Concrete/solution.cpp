#include <bits/stdc++.h>
#define int long long 
#define pb push_back 
#define __ThanhKhoa signed main 
#define FOR(i,a,b) for (int i = (a) ; i <= (b) ; i++) 
using namespace std;
 
__ThanhKhoa() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector <int> a;
        unordered_map <int,int> check;
        FOR(i,1,n) {
            int tmp;
            cin >> tmp;
            tmp = tmp - i;
            if (check.find(tmp) == check.end()) {
                a.pb(tmp);
                check[tmp] = 1;
                //cout << tmp << " ";
            }
        }
       sort(a.begin(),a.end());
      // FOR(i,0,a.size()-1) cout << a[i] << " ";
       int res = 1;
       int cur_len = 1;
       FOR(i,1,a.size()-1) {
          if ( a[i] - 1 == a[i-1] ) cur_len++;
          else {
            res = max(res , cur_len);
            cur_len = 1;
          }
       }
       cout << max(res, cur_len) << '
';
    }
}