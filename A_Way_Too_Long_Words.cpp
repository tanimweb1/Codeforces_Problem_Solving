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








#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
char s[101];
cin>>s;
int len = strlen(s);
int ans = len -2;
if(len>10){
   char a = s[0];
char b = s[len-1];
cout<<a<<ans<<b<<endl;
 
}
else{
    cout<<s<<endl;
}




}






    return 0;
}
