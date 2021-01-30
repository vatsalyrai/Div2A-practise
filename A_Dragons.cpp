#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,i=0;
    cin>>s>>n;
    bool flag =1;
    vector<pair<int,int>>v;
    while(i<n)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
       
        i++;
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
    {
        if(s>v[i].first)
        {
            s+=v[i].second;
        }
        else{
            flag=0;
        }
    }
    flag?cout<<"YES":cout<<"NO";
}