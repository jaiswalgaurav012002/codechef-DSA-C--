//access link: https://www.codechef.com/problems/CHEAT?tab=statemen


#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
         int n;
         cin>>n;
         int sum = 0;
         int j = 2;
         
         while(j<=n){
             sum++;
             j+=7;
         }
         cout<<sum<<endl;
     }
     return 0;
 }
