#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
#define FOR(i,a,b) for (int i = (a) ; i <= (b) ; i++)
#define pb push_back
using namespace std;
  int cnt (int u , int n , vector <bool> &check , vector <int> &a , int &final , int &state){
    int i = u;
    int tmp = 0;
    int count = 0;
    while ( i <= n ) {
        if (check[i] && a[i] > tmp) {
            final =  a[i];
            count++;
            tmp = a[i];
            check[i] = false;
            state = i % 2;
            i += 1;
        }
        else i += 2;
    }
    return count;
  }
__ThanhKhoa (){
    cin.tie(0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while ( q-- ) {
        int n;
        cin >> n;
        vector <int> a (n + 1);
        vector <int> od;
        vector <int> ev;
        od.pb(0);
        ev.pb(0);
        int mx = 0;
        FOR(i,1,n){
            int tmp;
            cin >> tmp;
            mx = max(mx, tmp);
            if ( i % 2 == 1) od.pb(tmp);
            else ev.pb(tmp);
        }
        sort (od.begin() + 1 , od.end());
        sort (ev.begin() + 1, ev.end());
        FOR (i,1,n) {
            if ( i % 2 == 0 ) a[i] = ev[i/2];
            else a[i] = od[(i / 2) + 1];
            //cout << a[i];
        }
        vector <bool> check(n + 1 ,true);
        int res = 0;
        int finale = 0;
        int st1 = 0;
        res = cnt ( 1 , n , check , a, finale, st1);
        if ( res == n) cout << "YES" << '
';
        else {
            int st2 = 0;
            FOR (i,1,n) {
                if (check[i]) {
                    res += cnt (i , n , check , a ,finale,st2);
                    break;
                }
            }
            if (res == n && st1 != st2) cout << "YES" << '
';
            else cout << "NO" << '
';
        }
    }
}