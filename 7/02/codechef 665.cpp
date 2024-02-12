// access link: https://www.codechef.com/problems/FAIRSHARE?tab=statement

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    
    int n,k;
    cin>>n>>k;
    
    cout<<n-(n/(k+1))*k<<endl;
}
	return 0;
}
