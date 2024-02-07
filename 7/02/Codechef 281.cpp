//Access link: https://www.codechef.com/practice/course/cpp/PCPP10/problems/CPPDEBUG04

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x,y;
	    cin>>x>>y;
	    if(x<y)
	    cout<<"B"<<endl;
	    else
	    cout<<"A"<<endl;
	}
	return 0;
}
