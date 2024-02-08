// access link: https://www.codechef.com/problems/FOOTCUP

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    if((x==y)&& x!=0 && y!=0){
        cout<<"yes"<<endl;
        
    }
    else{
        cout<<"No"<<endl;
    }
    
}
	return 0;
}
