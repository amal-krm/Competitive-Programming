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
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
   ll t;
   cin >>t;
   while(t--)
   {
       ll d;
       cin >> d;
       ll res =0;
       multiset<ll> b;
       while(d--)
       {
           ll n ;
           cin >> n;
           for(ll i=0 ; i<n ; i++)
           {
               ll x;
               cin >> x;
               //debugg(x);
               b.insert(x);
           }
           ll maxi=*(--b.end());
           ll mini = *(b.begin());
           //debugg(dim);
           res +=maxi - mini;
           b.erase(b.begin());
           b.erase(--b.end());
       }
       cout << res << endl;
       b.clear();
   }
  return 0;
}