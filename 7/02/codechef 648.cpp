// access : https://www.codechef.com/problems/BRUNCH

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    if(x/y >=20){
        cout<<20<<endl;
    }
    else{
        cout<<x/y<<endl;
    }
}
	return 0;
}
