#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        string s;
        cin>>s;
        vector<int> v;

       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='+')
           {
               continue;
           }
           int n = s[i]-'0';
           v.push_back(n);
          

       }
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++)
     { if(i!=v.size()-1){
         cout<<v[i]<<"+";
     }
     else
     {
         cout<<v[i];
     }
     }
}