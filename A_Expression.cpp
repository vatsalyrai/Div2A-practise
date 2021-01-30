#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    //sort(a,a+3);
    //int mx=INT_MIN;
    vector<int>v;
    int s1 =a+b*c;
int s2 = a*(b+c);
int s3=a*b*c;
int s4 = (a+b)*c;
int s5 = a+b+c;
v.pb(s1),v.pb(s2),v.pb(s3),v.pb(s4),v.pb(s5);
sort(v.begin(),v.end());
cout<<v[v.size()-1];


}