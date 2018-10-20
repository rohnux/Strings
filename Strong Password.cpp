/* Louise joined a social networking site to stay in touch with her friends. The signup page required her to input a name and a password. However, the password must be strong. The website considers a password to be strong if it satisfies the following criteria:

Its length is at least .
It contains at least one digit.
It contains at least one lowercase English character.
It contains at least one uppercase English character.
It contains at least one special character. The special characters are: !@#$%^&*()-+
She typed a random string of length  in the password field but wasn't sure if it was strong. Given the string she typed, can you find the minimum number of characters she must add to make her password strong?

Note: Here's the set of types of characters in a form you can paste in your solution:

numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"
Input Format:

The first line contains an integer  denoting the length of the string.
The second line contains a string consisting of  characters, the password typed by Louise. Each character is either a lowercase/uppercase English alphabet, a digit, or a special character.

Constraints

Output Format:

Print a single line containing a single integer denoting the answer to the problem.

Sample Input 1:
3
Ab1
Sample Output 1:
3

Sample Input 2:
11
#HackerRank
Sample Output 2:
1
                */

   Program in C++ -

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string password;
    int a=0,b=0,c=0,d=0;
    int n;
    cin>>n;  //Length of string
    cin>>password;   //Input String
    for(int i=0; i<n; i++)
    {
        if(isupper(password[i]))
            a++;
        else if(islower(password[i]))
            b++;
        else if(isdigit(password[i]))
            c++;
        else    //For Characters
            d++;
    }
    int count=0;
    
    if(a==0)
        count++;
    if(b==0)
        count++;
    if(c==0)
        count++;
    if(d==0)
        count++;
    if(count==0 && n<6)
        cout<<6-n;
    else if(n+count<6 )
        cout<<6-n;
    else
        cout<<count;


    return 0;
}
