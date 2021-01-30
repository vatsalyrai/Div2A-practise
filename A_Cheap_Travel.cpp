#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,b;
    cin>>n>>m>>a>>b;
    float costofmperride = b/m;
    float cost=0;
    if(costofmperride<a)
    {
     cost += (n/m) * b;
     //cout<<cost<<endl;
     cost = min(cost+(n%m)*a,cost+b);
     //cout<<cost<<endl;
    }
    else
    {
        cost+=n*a;
    }
   cout<<(long long)cost;
}