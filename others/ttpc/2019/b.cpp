#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 0; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b) {if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b) {if(a<b) a=b;}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    REP(i,n) {
        string s; cin >> s;
        int l = s.length();
        bool flag1 = false, flag2 = false; 
        REP(i,l) {
            if(i<l-3 && s.substr(i,4)=="okyo") flag1 = true;
            if(flag1 && i<l-2 && s.substr(i,3)=="ech") flag2 = true;
        }
        cout << (flag1 && flag2 ? "Yes" : "No") << "\n";
    }
    return 0;
}