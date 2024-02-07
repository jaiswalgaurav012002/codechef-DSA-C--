//access link: https://www.codechef.com/practice/course/cpp/PCPP10/problems/CPPDEBUG03




#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        int g = min(a,b);
        cout<<g<<endl;
    }
    return 0;
}