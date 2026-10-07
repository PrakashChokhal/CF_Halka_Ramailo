#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void dfs(ll node, ll par, vector<ll> adj[], vector<vector<ll>>& dp, vector<ll>& level, ll lev = 0) {
    dp[node][0] = par;
    level[node] = lev;
 
    for (ll i = 1; i <= 20; i++) {
        dp[node][i] = dp[dp[node][i - 1]][i - 1];
    }
 
    for (auto it : adj[node]) {
        if (it != par) {
            dfs(it, node, adj, dp, level, lev + 1);
        }
    }
}
 
ll binaryLifting(ll x, ll k, vector<vector<ll>>& dp) {
    ll par = x;
    ll cnt = 0;
 
    while (k) {
        if (k & 1) {
            par = dp[par][cnt];
        }
        k >>= 1;
        cnt++;
    }
 
    return par;
}
 
ll lca(ll a, ll b, vector<ll>& level, vector<vector<ll>>& dp) {
 
    if (level[a] < level[b]) {
        swap(a, b);
    }
 
    ll k = level[a] - level[b];
    a = binaryLifting(a, k, dp);
 
    if (a == b) {
        return a;
    }
 
    for (ll i = 20; i >= 0; i--) {
        if (dp[a][i] != dp[b][i]) {
            a = dp[a][i];
            b = dp[b][i];
        }
    }
 
    return dp[a][0];
}
 
void solve() {
 
    ll n, m;
    cin >> n >> m;
 
    vector<ll> adj[n + 1];
 
    for (ll i = 1; i < n; i++) {
        ll u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<vector<ll>> dp(n + 1, vector<ll>(21, 0));
    vector<ll> level(n + 1, 0);
 
    dfs(1, 0, adj, dp, level);
 
    while (m--) {
 
        ll k;
        cin >> k;
 
        vector<ll> arr(k);
 
        ll maxLevel = -1;
        ll node = 0;
 
        // Find deepest queried node
        for (ll i = 0; i < k; i++) {
            cin >> arr[i];
 
            if (level[arr[i]] > maxLevel) {
                maxLevel = level[arr[i]];
                node = arr[i];
            }
        }
 
        bool flag = false;
 
        // Check every node
        for (ll i = 0; i < k; i++) {
 
            ll temp = lca(node, arr[i], level, dp);
 
            if (level[arr[i]] - level[temp] > 1) {
                flag = true;
                break;
            }
        }
 
        if (flag)
            cout << "NO
";
        else
            cout << "YES
";
    }
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}