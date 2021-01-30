
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{int n;
cin>>n;
int size1,size2;
cin>>size1>>size2;
set<int, greater<int> > s1;
while(size1--)
{
    int data;
    cin>>data;
    s1.insert(data);
}
while(size2--)
{
    int data;
    cin>>data;
    s1.insert(data);
}
if(s1.size()==n)
{
    cout<<"I become the guy.";
}
else
{
    cout<<"Oh, my keyboard!";
}
//cout<<s1.size();
}