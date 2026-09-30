#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;


while(t--){
string s;
cin>>s;
int len = s.size();
char a,b;

if(len<=10){
    cout<<s<<endl;
}
else if(len>10){
     a = s.front();
     b = s.back(); 
     cout<<a<<len-2<<b<<endl;
}

}







    return 0;
}