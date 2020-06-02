#include<bits/stdc++.h>
#define debugg(x) cout<<#x <<": "<< x<< endl;
typedef  long long ull;
using namespace std;
 
bool Anagram()
{
    string a1 , a2;
    cin >> a1 >> a2;
    int n1 =a1.size();
    int n2 =a2.size();
    if((a1[0] != a2[0])||(a1[n1-1] != a2[n2-1]))
    {
        return false;
    }
    int occ1[27]={0};
    int occ2[27]={0};
    for(int i=0 ; i<n1 ; i++)
    {
        occ1[a1[i]-97]++;
    }
    for(int i=0 ; i<n2 ; i++)
    {
        occ2[a2[i]-97]++;
    }
    for(int i=0 ; i<27 ; i++)
    {
        if(occ1[i] != occ2[i])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    t--;
    while(t)
    {
 
        if(Anagram())
        {
            cout << "Awesome anagram\n";
        }
        else
        {
            cout << "Azuz is not my leader\n";
        }
        t--;
    }
     if(Anagram())
     {
        cout << "Awesome anagram";
     }
     else
     {
        cout << "Azuz is not my leader";
     }
    return 0;
}