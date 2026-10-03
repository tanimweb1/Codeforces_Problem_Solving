#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
int max = a[0],idxm=0;
int min = a[0],idxmin=0;

for(int i = 1;i<n;i++){
if(a[i]<min){
    min = a[i];
    idxmin = i;
}
if(a[i]>max){
    max = a[i];
    idxm = i;
}
}
a[idxmin] = max;
a[idxm] = min;

for(int i = 0;i<n;i++){
cout<<a[i]<<" ";

}





    return 0;
}