// Program in C++ 

#include<bits/stdc++.h>
#define n 1000000007
using namespace std;
int main()
{   
    int t;
    cin>>t;
    string s;
    while(t--)
    {
         cin>>s;
         map<char,int>m;
         map<char,int>::iterator it;
         
for(int i=0;i<s.size();i++)
     m[s[i]]++;
long  long int ans =1;

for(it=m.begin();it!=m.end();it++)
    {
    long int d = it->second;
    ans= ((ans%n)*(d%n))%n;
    
    }
    
cout<<ans<<"\n";
    
    }
    
return 0;

    
}
