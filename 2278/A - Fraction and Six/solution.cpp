#include <bits/stdc++.h>
#define int long long 
#define __ThanhKhoa signed main 
 
using namespace std;
 
__ThanhKhoa () {
    cin.tie (0) -> ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n , m;
        cin >> n >> m;
        string s1 , s2;
        cin >> s1 >> s2;
        unordered_map <char,int> mp;
        string res = "NO";
        bool check = true;
        for (int i = 0 ; i < n ; i++) mp[s1[i]]++;
        for (int i = 0 ; i < m ; i++) {
           mp[s2[i]]--;
           if (mp[s2[i]] < 0) check = false;
        }
        if (n - m == 3 && mp['s'] == 1 && mp['i'] == 1 && mp['x'] == 1 && check) res = "YES";
        cout << res  << '
';
    }
}