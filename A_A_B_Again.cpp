#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int sum = 0;
while(n!=0){
    int ans = n%10;
    sum = sum + ans;
    n = n/10;
}

cout<<sum<<endl;







}






    return 0;
}