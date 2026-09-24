#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
char a[101];
cin>>a;
int len = strlen(a);

for(int i = 0;i<len;i++){
if(a[i] =='a' && a[i+1]== 'b' && a[i+2]=='c' ){
    cout<<"YES"<<endl;
}
else if(a[i] =='a' && a[i+1]== 'c' && a[i+2]=='b' ){
    cout<<"YES"<<endl;
}
if(a[i] =='c' && a[i+1]== 'b' && a[i+2]=='a' ){
    cout<<"NO"<<endl;
}

}



}





    return 0;
}