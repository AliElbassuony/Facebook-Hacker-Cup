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
    string s;
    cin >> s;

    set<char> st;
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');

    bool vowel = false;
    int count = 0, mini = INT_MAX, len = s.size(), vowel_num = 0;


    for (auto i : s) {
        vowel = (st.find(i) != st.end());
        if (vowel) {
            vowel_num++;
            for (auto j : s) {
                if (i == j)
                    continue;
                vowel = (st.find(j) != st.end());
                if (vowel)
                    count += 2;
                else
                    count++;
            }
        } else {
            for (auto j : s) {
                if (i == j)
                    continue;
                vowel = (st.find(j) != st.end());
                if (vowel)
                    count++;
                else
                    count += 2;
            }
        }
        mini = min(mini, count);
        count = 0;
    }
    if (vowel_num == len || vowel_num == 0)
        cout << (int)min(mini, len);
    else
        cout << mini;
    cout << el;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt","w",stdout);
    int t = 1,it = 1;
    cin >> t;
    while (t--){
        cout << "Case #"<<it++<<": ";
        solve();
    }
}
