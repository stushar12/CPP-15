#include <bits/stdc++.h>
#include<string>
using namespace std;
bool check(string str1)
{
    stack<char> s;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i] == '{' || str1[i] == '(' || str1[i] == '[')
            s.push(str1[i]);
        else
        {
            if(s.top() == true)
                return false;
            if(s.top()=='{' && str1[i]=='}')
                s.pop();
            else if(s.top()=='(' && str1[i]==')')
                s.pop();
            else if(s.top()=='[' && str1[i]==']')
                s.pop();
            else
                break;
        }
    }
if(s.empty()==true)
{
    return true;
}
else
{
     return false;
}
}
int main()
{
    int n;
    cin>>n;
    string str;
    while(n)
    {
        cin>>str;
        bool b= check(str);
        cout<<b;
        n--;
    }
   
}
