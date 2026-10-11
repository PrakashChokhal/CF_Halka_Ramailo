#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    if (n <= 2) {
        cout << 1 << '
';
        for (int i = 2; i <= n + 1; i++)
            cout << 1 << ' ';
    } else {
        cout << 2 << '
';
        for (int i = 2; i <= n + 1; i++) {
            bool isPrime = true;
 
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
 
            cout << (isPrime ? 1 : 2) << ' ';
        }
    }
 
    cout << '
';
    return 0;
}