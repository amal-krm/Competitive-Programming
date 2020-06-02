#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  while (t)
  {
    int n, x;
    cin >> n;
    int T[n];
    for(int i=0 ; i<n ; i++)
        cin >> T[i];
    int Res=0;
    int temp =T[0];
    for(int i=1 ; i<n ; i++)
    {
        temp =max(T[i] , temp+T[i]) ;
        Res = max(Res , temp);
    }
    if (Res <= 0)
    {
      cout << "better luck next year" << endl;
    }
    else
    {
      cout << Res << endl;
    }
    t--;
  }
  return 0;
}