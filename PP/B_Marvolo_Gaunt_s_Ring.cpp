#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
        int N,p,q,r;
        cin >>N>>p>>q>>r;
        ll a[N];
        FOR(i, N)
        cin >> a[i];
        ll pmax[N];
        ll smax[N];
        ll ans = LLONG_MIN;
        pmax[0] = p*a[0];
        smax[N-1] = r* a[N-1];
        for(ll i=1;i<N;i++)
        {
            pmax[i] = max(pmax[i-1],p*a[i]);
        }
        for(ll i=N-2;i>=0;i--)
        {
            smax[i] = max(smax[i+1],r*a[i]);
        }
        for(ll i=0;i<N;i++)
        {
            ans = max(ans, pmax[i] + q*a[i]+smax[i]);
        }
        cout<<ans;

    
    return 0;
}
