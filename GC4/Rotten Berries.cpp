#include<bits/stdc++.h>
#define debugg(x) cout<<#x <<":"<< x.first <<' ' << x.second<< endl;
typedef  long long ull;
using namespace std;
char T[103][103];
int n , m;
vector<pair<int,int>> rot;
const int dx[] = { 0, -1, 0, 1};
const int dy[] = { -1, 0, 1, 0};
bool voisin(int x , int y)
{
    if((x>=0) && (x<n) && (y>=0) && (y<m))
    {
        return true ;
    }
    return false;
}
void passing(int x , int y)
{
    for(int i=0 ; i<4 ; i++)
    {
        int xx = x+dx[i];
        int yy = y+dy[i];
        if((voisin(xx , yy)) && (T[xx][yy] == 'o'))
        {
            T[xx][yy] = 'x';
            rot.push_back(make_pair(xx , yy));
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0; j<m ; j++)
        {
            cin >> T[i][j];
            if(T[i][j] == 'x')
            {
                rot.push_back(make_pair(i , j));
            }
        }
    }
    int d;
    cin >> d;
    while(d--)
    {
        for(auto u : rot)
        {
            passing(u.first , u.second);
        }
    }
    int comp =0;
     for(int i=0 ; i<n ; i++)
    {
        for(int j=0; j<m ; j++)
        {
            if(T[i][j] == 'o')
            {
                comp++;
            }
        }
    }
    cout << comp ;
    return 0;
}