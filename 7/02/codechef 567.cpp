// access link:  https://www.codechef.com/problems/PAINTCHRIS

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,y,z;
    cin>>x>>y>>z;
    
    cout<<z/(x*y*2)<<endl;
}
	return 0;
}
