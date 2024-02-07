//link to question: https://www.codechef.com/practice/course/cpp/PCPP10/problems/CPPDEBUG01


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	    if((a<y) && (a>=x)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
