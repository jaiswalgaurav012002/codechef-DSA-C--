//access link: https://www.codechef.com/problems/LITRATE


#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    double p,l;
    cin>>p>>l;
    
    double percentage = (l/p)*100;
    
    if(percentage>=75){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
	return 0;
}

