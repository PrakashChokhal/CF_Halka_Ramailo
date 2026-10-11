#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '
'
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = n;
 
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                if (i <= k) {
                    ans = min(ans, n/i);
                }
                if (n/i <= k) {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}