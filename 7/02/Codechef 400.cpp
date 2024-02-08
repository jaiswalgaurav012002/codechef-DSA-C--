// access link: https://www.codechef.com/problems/ADVANCE

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    
    int g= x+200;
    if(y>g || y<x){
        cout<<"No"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
	return 0;
}
