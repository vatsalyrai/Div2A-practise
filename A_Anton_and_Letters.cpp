#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{string s;
getline(cin,s);
map<char,int> m;
for(int i=0;i<s.length();i++)
{ if(isalpha(s[i])){   
    
     m[s[i]]++;
     }
}
cout<<m.size();
}