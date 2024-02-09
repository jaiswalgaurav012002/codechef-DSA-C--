//access link: https://www.codechef.com/problems/AVGPROBLEM


#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;

    for(int i=0;i<t;i++){
        double a,b,c;
        cin>>a>>b>>c;
        double avg  =(a+b)/2;
        if(avg>c){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

	return 0;
}