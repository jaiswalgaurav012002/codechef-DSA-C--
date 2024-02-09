//access link:  https://www.codechef.com/problems/EXAMCHEF


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
double x,y,z;
cin>>x>>y>>z;
  double quo = (x*y)/2;
  
  if(quo<z){
      cout<<"YES"<<endl;
      
  }
  else
      cout<<"no"<<endl;
}
	return 0;
}


