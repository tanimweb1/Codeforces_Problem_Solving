#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int ans;
if(a>b){
    ans = a-b;
}
else if(b>a){
    ans = b-a;
}
else{
    ans = a-b;
}
cout<<ans<<endl;




}






    return 0;
}