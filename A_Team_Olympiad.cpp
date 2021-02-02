#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    unordered_map<int,int> mp;
   int minf=INT_MAX;
   vector<int> v2;
   vector<int> v1;
   vector<int> v3;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
       if(a[i]==1)
       {
           v1.push_back(i);
       }
       else if(a[i]==2)
       {
           v2.push_back(i);
       }
       else
       {
           v3.push_back(i);
       }
       
    } 
    if(mp.size()!=3)
    {
        cout<<0<<endl;
    }
    else{
    for(auto i:mp)
    { minf = min(i.second,minf);
        //cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<minf<<endl;
    for(int i=0;i<minf;i++)
    {
        cout<<v1[v1.size()-1]<<" "<<v2[v2.size()-1]<<" "<<v3[v3.size()-1]<<endl;
        v1.pop_back();
        v2.pop_back();
        v3.pop_back();
    }
    }
    

}