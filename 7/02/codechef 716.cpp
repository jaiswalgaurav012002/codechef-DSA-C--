//access link: https://www.codechef.com/problems/FIZZBUZZ23_2

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n,x,d;
    cin>>n>>x>>d;
    cout<<(n/(x*5))+d<<endl;
}
	return 0;
}
