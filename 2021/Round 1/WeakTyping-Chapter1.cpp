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
    int n, left = 0, right = 0, mini = 0;
    string s;
    cin >> n >> s;
    bool Flag_Left = 1, Flag_right = 1;
    // Left Hand  F and X
    for (auto i : s) {
        if (i == 'F')
            continue;
        else if (i == 'X') {
            if (!Flag_Left)
                left++;
            Flag_Left = 1;
        } else {
            if (Flag_Left)
                left++;
            Flag_Left = 0;
        }
    }
    // Right Hand F and O
    for (auto i : s) {
        if (i == 'F')
            continue;
        else if (i == 'O') {
            if (!Flag_right)
                right++;
            Flag_right = 1;
        } else {
            if (Flag_right)
                right++;
            Flag_right = 0;
        }
    }

    mini = min(left, right);
    cout << mini << el;
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