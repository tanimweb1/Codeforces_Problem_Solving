#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;

if(a==1 || b>a){
    cout<<-1<<endl;
}
else if(a==b){
    cout<<-1<<endl;
}
else if(a>=b*2){
    cout<<b<<endl;
}
else
        cout<<b/2<<endl;


}






    return 0;
}