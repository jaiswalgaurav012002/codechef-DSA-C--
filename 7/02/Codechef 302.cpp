//access link: https://www.codechef.com/problems/FOURTICKETS

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;

for(int i=0;i<t;i++){
    int x;
    cin>>x;
    if((x*4)>1000){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
}
	return 0;
}
