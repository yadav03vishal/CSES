#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    long long count = 0;
    for(int i=1;i<n;i++)
    {
      if(v[i]<v[i-1])
      {
        long long increase = v[i-1]-v[i];
        // cout << increase << endl;
        count+=increase;
        v[i]+=increase;
      }
    }
    cout << count << endl;
}