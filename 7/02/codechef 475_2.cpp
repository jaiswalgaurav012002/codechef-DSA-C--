//access link: https://www.codechef.com/problems/INSURANCE



#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;

    if(y>=x){
        cout<<x<<endl;
    }
    else if(x>=y){
       cout<<y<<endl; 
    }
}
	return 0;
}
