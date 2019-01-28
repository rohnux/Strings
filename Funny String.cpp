// Program in C++ 

#include <bits/stdc++.h>
using namespace std;

int main()
{string str1,str2;
    int t;
    cin>>t;
    while(t--)
   {   int count=0;
        cin>>str1;
    str2=str1;
    reverse(str2.begin(),str2.end());
for(int i=0;str1[i]!='\0';i++)
{
   if(abs(str1[i+1]-str1[i])==abs(str2[i]-str2[i+1]))
     {  count++;
          
     }

}   
   if(count==str1.length()-1)
   cout<<"Funny\n";
   else
   cout<<"Not Funny\n";
   }
    return 0;
}
