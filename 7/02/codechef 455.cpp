//access link: https://www.codechef.com/problems/FLOW006


#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int sum=0;
        while(n!=0){
            int r = n%10;
           sum+=r;
           
           n = n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}