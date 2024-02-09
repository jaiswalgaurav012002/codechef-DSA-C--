//access link: https://www.codechef.com/problems/AIRLINES
//access link:
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y,z;
    cin>>x>>y>>z;
    int total = x*10;
    if(total>=y){
        cout<<y*z<<endl;
    }
    else{
        cout<<total*z<<endl;
    }
}
	return 0;
}

