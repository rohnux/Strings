
#include <bits/stdc++.h>
using namespace std;

// Complete the appendAndDelete function below.
void  appendAndDelete(string s, string t, int k) 
{int i,j;
int l=0;
j=0;
for(i=0;s[i]!='\0';i++)
{
    if(s[i]==t[j])
    {       l++;
            j++;
    }
    else 
    break;
}

 int n =s.length();
int m =t.length();

if(n+m-2*l>k)
cout<<"No\n";
else if((n+m-2*l)%2==k%2)
cout<<"Yes\n";
else if(n+m-k<0)
cout<<"Yes\n";
else  
cout<<"No\n";


}

int main()
{
    string s,t;
    int k;
    cin>>s>>t>>k;
  appendAndDelete(s,t,k);
    return 0;
}
