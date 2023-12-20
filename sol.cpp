#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
    int n;
    cin >> n;
    long long a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    long long after_exp[n], total = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            after_exp[i] = max(0LL, a[i] - b[n-1]);
        } else {
            after_exp[i] = max(0LL, a[i] - b[i-1]);
        }
        total += after_exp[i];
    }
    long long mn = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        mn = min(mn, total - after_exp[i] + a[i]);
    }
    cout << mn << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case(tc);
    }
}
