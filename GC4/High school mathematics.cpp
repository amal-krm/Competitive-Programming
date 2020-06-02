#include <bits/stdc++.h>
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
using namespace std;
using ll = long long;
using ull = unsigned long long;
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1);
void phi(ll n)
{
    ll result = n;
    for (ll p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    cout << result << endl;
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll x ;
        cin >> x ;
        phi(x);
    }
  return 0;
}