#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; ++i)
#define REPP(i, n) for(int i = 1; i <= n; ++i)
#define REPR(i, n) for(int i = n-1; i >= 1; --i)
#define FOR(i, m, n) for(int i = m; i < n; ++i)
#define ALL(v) v.begin(), v.end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll MOD = 1000000007;
const ll INF = 1000000000;

struct UnionFind {
    vector<ll> par, size;
    UnionFind(ll n) : par(n), size(n,1) {
        for(int i = 0; i < n; i++) par[i] = i;
    }
    void Union(ll x, ll y) {
        x = Find(x), y = Find(y);
        if(x == y) return;
        if(size[x] < size[y]) swap(x,y);
        size[x] += size[y];
        par[y] = x;
    }
    ll Find(ll x) {
        if(par[x]==x) return x;
        else return par[x] = Find(par[x]);
    }
    bool Same(ll x, ll y) {
        return Find(x) == Find(y);
    }
    ll Size(ll x) {
        return size[Find(x)];
    }
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,m; cin >> n >> m;
    vector<int> a(m), b(m);
    REP(i,m) {
        cin >> a[i] >> b[i]; a[i]--, b[i]--;
    }
    UnionFind uf(n);
    vector<ll> ans(m);
    ans[m-1] = (n*(n-1))/2;
    REPR(i,m) {
        if(uf.Same(a[i], b[i])) {
            ans[i-1] = ans[i];
        }
        else {
            ans[i-1] = ans[i] - (uf.Size(a[i]) * uf.Size(b[i]));
            uf.Union(a[i],b[i]);
        }
    }
    REP(i,m) {
        cout << ans[i] << endl;
    }
    return 0;
}