#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
if(n==1){
    if(a[0]<0){
cout<<a[0]*-1<<endl;
return 0;
    }
    else{
        cout<<a[0]<<endl;
    }
    return 0;
    
}
for(int i= 0;i<n;i++){
a[i] = abs(a[i]);
}
int min = a[0];
for(int i = 0;i<n;i++){
if(a[i]<min){
    min = a[i];
}
}
for(int i =0;i<n;i++){
    if(a[i]==0){
        cout<<0<<endl;
        return 0;
    }
  
}
cout<<min<<endl;

    return 0;
}