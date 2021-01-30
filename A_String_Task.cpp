#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        string s;
        cin>>s;
       for(int i=0;i<s.length();i++)
       { if(s[i]=='y' || s[i]=='Y')
       {
           continue;
       }
           if(s[i]!='y' && s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' )
           { if(isupper(s[i])){
               char ch = tolower(s[i]);
               cout<<"."<<ch;
           }
           else
           {
                cout<<"."<<s[i];
           }
           
           }
           else{
               continue;
           }
       }
    
}