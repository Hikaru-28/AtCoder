#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll x,y; cin >> x >> y;
    ll ans = LLONG_MAX;
    if(x<=y) chmin(ans,abs(y-x));
    if(x<=-y) chmin(ans,-y-x+1);
    if(-x<=y) chmin(ans,y+x+1);
    if(-x<=-y) chmin(ans, -y+x+2);
    cout << ans << endl;
    return 0;
}