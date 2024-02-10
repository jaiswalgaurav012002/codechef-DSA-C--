// access link: https://www.codechef.com/problems/CHOCDISTRIB?tab=statement

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    
    int n;
    cin>>n;
    if(n ==1){
        cout<<1<<" "<<1<<endl;
    }
    else if((n>1) && n%2 != 0){
        cout<<(n/2)+1<<" "<<n<<endl;
    }
    else{
        cout<<n/2<<" "<<n<<endl;
    }
}
	return 0;
}