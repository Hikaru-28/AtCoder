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
    vector<ll> a(n);
    map<ll,ll> mp;
    REP(i,n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<ll> b = a;
    sort(ALL(b), greater<ll>());
    UNIQUE(b);
    REP(i,n) {
        ll ans = (a[i]==b[0] && mp[a[i]]==1 ? b[1] : b[0]);
        cout << ans << endl;
    }
    return 0;
}