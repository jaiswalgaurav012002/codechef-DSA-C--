//access link:  https://www.codechef.com/problems/DISTINCTCOL?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    cout<<arr[n-1]<<endl;
}
	return 0;
}