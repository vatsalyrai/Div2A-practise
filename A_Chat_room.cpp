#include<bits/stdc++.h>
using namespace std;
bool issubsequence(string s , string given , int given_size , int s_size)
{
    if(given_size==0)
    {
        return true;
    }
    if(s_size==0)
    {
        return false;
    }
    if(s[s_size-1]==given[given_size-1])
    {
        return issubsequence(s,given,given_size-1 ,s_size-1);
    }
    return issubsequence(s,given,given_size,s_size-1);
}
int main()
{
    string s;
    cin>>s;
    string given="hello";
    issubsequence(s,given,given.length(),s.length())?cout<<"YES":cout<<"NO";
    
}