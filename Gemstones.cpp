// Program in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  int n;
  cin>>n;
  int count=0;
  int arr[26]={0};
for(int i=1;i<=n;i++)
{
    cin>>str;  
    for(int j=0;j<str.length();j++)
   {
    if(arr[str[j]-'a'] == i-1)  
     arr[str[j]-'a']++;
   }
 }
   for(int i=0;i<26;i++)
  {
     if(arr[i]==n)
     count++;
  }

    cout<<count;
 return 0;
}
