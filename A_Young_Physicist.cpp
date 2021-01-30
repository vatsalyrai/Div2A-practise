#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
       // cout<<sum<<endl;
    }
    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}