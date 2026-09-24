#include<bits/stdc++.h>
using namespace std;
int main(){
char s[51];
cin>>s;
int len = strlen(s);


if(s[0]=='.'){
    cout<<0;
}
for(int i = 1;i<len;i=i+1){
if(s[i]=='.' && (s[i+1] !='.' && s[i+1]!='-')){
cout<<0;
}
}
for(int i = 1;i<len;i=i+2){
 if(s[i]=='-'&&s[i+1]=='.'){
cout<<1;
}
else if(s[i]=='-'&&s[i+1]=='-'){
cout<<2;
}

}









    return 0;
}