#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    int ans = 0;
    int right;
    REP(left,n) {
        if(a[left]==0) continue;
        right = left;
        while (a[right]<=a[right+1] && right+1<n) {
            right ++;
        }
        left = right;
        ans ++;
    }
    cout << ans << endl;
    return 0;
}