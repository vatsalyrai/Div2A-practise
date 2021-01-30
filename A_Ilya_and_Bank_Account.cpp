#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
    cin>>x;
  
    string s= to_string(x);
    string ans1="";
    string ans2="";
    for(int i=0;i<s.length();i++)
    {
        if(i==s.length()-1)
        {
            continue;
        }
        ans1+=s[i];
    }
    for(int i=0;i<s.length();i++)
    {
        if(i==s.length()-2)
        {
            continue;
        }
        ans2+=s[i];
    }
    //cout<<tempa;
   int a=stoi(ans1),b=stoi(ans2);
   int final= max(a,max(b,x));
  // cout<<a<<" "<<b<<" "<<x;
   cout<<final;
	return 0;
}