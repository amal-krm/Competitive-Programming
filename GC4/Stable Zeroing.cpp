#include<bits/stdc++.h>
#define debugg(x) cout<<#x <<": "<< x<< endl;
typedef  long long ull;
using namespace std;
int main()
{
    int n;
    cin >> n ;
    ull T[n];
    ull Res[n]={0};
 
    int j=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> T[i];
        if(T[i] != 0)
        {
            Res[j]= T[i];
            j++;
        }
    }
    for(int i=0 ; i<n-1 ; i++)
    {
         cout <<Res[i] << "  ";
 
    }
    cout << Res[n-1];
    return 0;
}