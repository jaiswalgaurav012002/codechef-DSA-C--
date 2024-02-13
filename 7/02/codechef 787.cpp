// access link:  https://www.codechef.com/problems/INDIVISIBLE?tab=statement


#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t ;i++){
        int a,b,c;
        cin >>a>>b>>c;
        
        for(int i = 1;i<100;i++){
            if(a%i !=0 && b%i !=0 && c%i !=0 ){
                cout<<i<<endl;
                break;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}