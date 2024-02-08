//access link: https://www.codechef.com/problems/FLOW004?tab=statement
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
     
     int g;
     g = n%10; // last digit
     int digit_1 = 0;
     while(n>9){
         n=n/10;
         
     }
     cout<<g+n<<endl;
    }
    return 0;
}
