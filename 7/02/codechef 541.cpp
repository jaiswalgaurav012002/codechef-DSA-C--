// access link:  https://www.codechef.com/problems/PHONEYR?tab=statement


#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    int a = x%10;
     x = x/10;
    int b = x%10;
    
    cout<<"k"<<b<<a<<endl;
    return 0;
}