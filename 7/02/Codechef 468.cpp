//access link: 
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y,z;
    cin>>x>>y>>z;
    int time_completion = x*y;
    int time_limit = z*24*60;
    
    if(time_completion<=time_limit){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
	return 0;
}