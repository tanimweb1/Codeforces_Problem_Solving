#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){

   char s[101];
    cin>>s;

    int len = strlen(s);


if(len>10){
//len = len -2;
char first[3] ;
   
 first[0] = s[0];
cout<<first[0];
first[2] = s[len-1];
cout<<len-2<<first[2];
    
}
else{
    for(int i = 0;i<len;i++){
        cout<<s[i];
    }
}
cout<<endl;

}
 



    return 0;
}