//access link: https://www.codechef.com/problems/CHEAPFOOD

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x;
    cin>>x;
    
    double discount1 = x-((x*10)/100);
    double  discount2 = x-100;
    if(discount1>=discount2){
        cout<<100<<endl;
    }
    else{
        cout<<(x*10)/100<<endl;
    }
}
	return 0;
}
