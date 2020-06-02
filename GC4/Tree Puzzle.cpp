#include<bits/stdc++.h>
#define debugg(x) cout<<#x <<":"<< x.first <<' ' << x.second<< endl;
const int MAXN = 1e5 + 7;
const int MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
typedef  long long ull;
using namespace std;
int a[MAXN];
vector<int> adj[MAXN];
int level[MAXN]={0};
bool vis[MAXN];
void solve()
{
    level[1]= 1;
     vis[1] = true;
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(vis[v] == false)
            {
                level[v]= level[u]+1;
                    vis[v] = true;
                    q.push(v);
            }
 
        }
    }
 
}
int main()
{
    int n;
    cin >> n;
    for(int i=1 ; i<n+1 ; i++)
    {
        cin >> a[i];
    }
    int u , v;
    for(int i=1 ; i<=n-1 ; i++)
    {
 
        cin >> u>> v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    solve();
    int ans =0;
    for(int i=1 ; i<n+1 ; i++)
    {
        if(level[i]%2 == 0)
        {
            ans+= a[i];
        }
    }
    cout << ans;
    return 0;
}