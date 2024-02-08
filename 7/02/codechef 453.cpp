//access link: https://www.codechef.com/problems/ADVITIYA2

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int r1,r2,r3,r4,r5;
    cin>>r1>>r2>>r3>>r4>>r5;
    int g = r1+r2+r3+r4+r5;
    
    if(g>=4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
	return 0;
}


