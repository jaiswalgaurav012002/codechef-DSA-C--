//access link: https://www.codechef.com/problems/CANCHEF


#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    
    if(x*15>= 2*y){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
	return 0;
}
