#include<bits/stdc++.h>
using namespace std;

int main()
{
    int st,m;
    cin>>st>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    int mn =INT_MAX;
  sort(a,a+m);
  for(int i=0;i<m;i++)
  { if(i+st-1<m){
      mn=min(mn,abs(a[i+st-1] -a[i]));
  }
  }
    cout<<mn;
}