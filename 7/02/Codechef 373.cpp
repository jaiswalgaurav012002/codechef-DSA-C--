// access link: https://www.codechef.com/problems/TCKTFINE

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x,p,q;
    cin>>x>>p>>q;
    cout<<(p-q)*x<<endl;
}
	return 0;
}
