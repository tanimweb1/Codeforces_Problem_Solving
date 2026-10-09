#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
int b[n];
for(int i = 0;i<n;i++){
    b[i]= a[i];
}
int i = 0;
int j = n-1;
while(i<j){
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    i++;
    j--;
}
for(int i = 0;i<n;i++){
if(b[i]!=a[i]){
    cout<<"NO"<<endl;
    return 0;
}

}
cout<<"YES"<<endl;






    return 0;
}









#include<bits/stdc++.h>
using namespace std;
int main(){
char s[1001];
cin>>s;

int len = strlen(s);
int palin=0;
for(int i = 0,j=len-1;i<j;i++,j--){
if(s[i] != s[j]){
palin=1;
cout<<"NO"<<endl;
break;
}

}

if(palin==0){
    cout<<"YES"<<endl;
}





    return 0;
}
