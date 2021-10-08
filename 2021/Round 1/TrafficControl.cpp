#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;


void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int val = n + m - 2;

    if (a <= val || b <= val)
        cout << "Impossible" << el;
    else {
        cout << "Possible" << el;

        for (int k = 0; k < m; ++k) {
            if (k == 0)
                cout << a - val << " ";
            else if (k == m - 1)
                cout << b - val << el;
            else
                cout << 1 << " ";
        }

        for (int i = 0; i < n - 2; ++i) {
            for (int j = 0; j < m; ++j) {
                if (j == 0 || j == m - 1)
                    cout << 1 << " ";
                else
                    cout << 1000 << " ";
            }
            cout << el;
        }

        for (int l = 0; l < m; ++l) {
            cout << 1 << " ";
        }
        cout << el;
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    freopen("in.txt", "r", stdin);
    freopen("out.txt","w",stdout);
    int t = 1, it = 1;
    cin >> t;
    while (t--) {
        cout << "Case #" << it++ << ": ";
        solve();
    }
}