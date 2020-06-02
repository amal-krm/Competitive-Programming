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
vector<int> adj[55];
int n , m;
int bfs(int s) {
	int res = -1;
	vector<int> dist(n, INF);
	vector<bool> vis(n, false);
 
	dist[s] = 0;
	vis[s] = true;
 
	queue<int> q;
	q.push(s);
 
	while(!q.empty()) {
		int u = q.front();	q.pop();
 
		for(int v : adj[u]) {
			dist[v]=min(dist[v], dist[u] + 1);
			if(vis[v]) continue;
			vis[v] = true;
			q.push(v);
		}
	}
 
	for(int i = 0; i < n; ++i) {
		res=max(res, dist[i]);
	}
 
	return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
    cin >>n >>m;
    for(int i=0; i<m ; i++)
    {
        int x , y;
        cin >> x >>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int res =0;
    for(int i=0 ; i<n ; i++)
    {
       res = max(res , bfs(i));
 
    }
    cout << res << endl;
  return 0;
}
