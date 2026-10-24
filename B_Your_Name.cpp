#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
string s,t;
cin>>s>>t;

sort(s.begin(),s.end());
sort(t.begin(),t.end());




int a = s.compare(t);
if(a==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}




}






    return 0;
}