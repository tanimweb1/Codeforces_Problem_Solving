#include<bits/stdc++.h>
using namespace std;
int main(){
char s[10001];
cin>>s;
char t[10001];
cin>>t;


int scnt = 0,tcnt=0;
for(int i = 0;s[i]!='\0';i++){
scnt++;
}
for(int i = 0;t[i]!='\0';i++){
tcnt++;
}

cout<<scnt<<" "<<tcnt<<endl;
cout<<s<<" "<<t;







    return 0;
}