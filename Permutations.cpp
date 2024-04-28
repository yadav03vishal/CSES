#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   if(n==4)cout<<"2 4 1 3"<<endl;
   else if(n==2 || n==3)cout << "NO SOLUTION";
   else{
   vector<long long> v;
   for(int i=1;i<=n;i+=2)v.push_back(i);
   for(int i=2;i<=n;i+=2)v.push_back(i);

   for(int i=0;i<n;i++)cout<<v[i]<<" ";
   }

}