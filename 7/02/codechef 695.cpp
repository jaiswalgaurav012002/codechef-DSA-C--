//access link: https://www.codechef.com/problems/SURPLUS?tab=statement


#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
     
    if(a2+b2 > a1+b1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
	return 0;
}






