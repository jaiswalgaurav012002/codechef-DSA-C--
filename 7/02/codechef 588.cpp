// access link: https://www.codechef.com/problems/FLOW007


#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        int reversed = 0;
        while(n!=0){
            int digit = n%10;
            reversed = reversed*10 + digit;
            n = n/10;
        }
        cout<<reversed<<endl;
    }
    return 0;
}
