#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i= 0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);

 int min1 = a[0];

 int count=1;
 for(int i = 1;i<n;i++){
if(min1==a[i]){
    count++;
}
}

if(count%2==0){
    cout<<"Unlucky"<<endl;
}
else{
    cout<<"Lucky"<<endl;
}



    return 0;
}