// access link: https://www.codechef.com/problems/HOTCOLD

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int c;
    cin>>c;
    if(c>20){
        cout<<"HOT"<<endl;
    }
    else{
        cout<<"COLD"<<endl;
    }
}
	return 0;
}
