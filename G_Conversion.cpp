#include<bits/stdc++.h>
using namespace std;
int main(){
char s[100001];
cin.getline(s,100001);
for(int i =0;s[i]!='\0';i++){
     if(s[i]==','){
    s[i] =' ';
}
if(s[i]>='a'&& s[i]<='z'){
    s[i] = s[i] -'a'+'A';
}
else if(s[i]>='A'&& s[i]<='Z'){
    s[i] = s[i] -'A'+'a';
}


}

cout<<s<<endl;





    return 0;
}