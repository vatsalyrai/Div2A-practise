#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<string> ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&& s[i+2]=='B' && i+2<s.length())
        {  i=i+2;
            cout<<" ";
             continue;
        }
        else
        { cout<<s[i];
        }
        
    }
}