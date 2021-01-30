#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    int sum1 =0,sum2=0,count=0;
    for(int i=0;i<n;i++)
    { sum1+=a[i];
     count++;
      sum2=0;
        for(int j=i+1;j<n;j++)
        {
          sum2+=a[j];
        }
        if(sum1>sum2)
        {
            break;
        }
    }
    cout<<count<<endl;
}