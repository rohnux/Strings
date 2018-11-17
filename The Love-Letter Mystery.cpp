// Program in C++ -

#include <bits/stdc++.h>
using namespace std;
int theLoveLetterMystery(string s)
{
    int ans=0;
    int i=0;
    int j=s.length()-1;
    while(j>=i)
    {
        ans +=abs(int(s[i]) - int(s[j]));
        i++;
        j--;
    }
    return ans ;
}
int main()
{
    int q;
    cin >> q;
    string s;
    for(int i=0; i<q; i++)
    {
        cin>>s;
        int result = theLoveLetterMystery(s);
        cout<<result<<"\n";
    }
    return 0;
}
