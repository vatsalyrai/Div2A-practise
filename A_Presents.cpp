#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n+1];
   memset(a,-1,sizeof(a));
  for(int i=1;i<=n;i++)
  {
      int data;
      cin>>data;
      a[data]=i;
  }
  for(int i=0;i<=n;i++)
  {
      if(a[i]==-1)
      {
          continue;
      }
      cout<<a[i]<<" ";
      
  }
    
}