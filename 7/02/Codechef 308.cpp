//access link: https://www.codechef.com/problems/SUMM

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
int a,b,c;
cin>>a>>b>>c;
if(a+b == c){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
	return 0;
}
