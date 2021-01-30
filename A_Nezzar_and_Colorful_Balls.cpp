#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   unordered_map<int,int> mp;
        int size;
        cin>>size;
        int a[size];
        int mx = INT_MIN;
        for(int i=0;i<size;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        
        
            for(auto i : mp)
            {
                mx = max(mx,i.second);
            }
            cout<<mx<<endl;
        
        

    }
}
