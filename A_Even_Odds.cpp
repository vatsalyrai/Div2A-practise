#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        ll boundary = n/2;
        if(k<=boundary)
        {
            cout<<2*(k-1)+1;
        }
        else
        {
            cout<<2*(k-boundary);
        }
        
    }
    if(n%2!=0)
    {
        ll boundary = n/2 +1;
        if(k<=boundary)
        {
            cout<<2*(k-1)+1;
        }
        else
        {
            cout<<2*(k-boundary);
        }
        
    }
}