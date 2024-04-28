#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    int maxi = 1;
    int i=1,count=1;
    while (i<s.length())
    {
        while(s[i]==s[i-1])
        {
        count++;
        i++;
        }
        maxi = max(count,maxi);
        count=1;
        i++;
    }
    
    cout << maxi;

}