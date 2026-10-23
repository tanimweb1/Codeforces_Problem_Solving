#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a[t];
for(int i=0;i<t;i++){
cin>>a[i];
}
if(t==1){
    cout<<0<<endl;
    return 0;
}

int sum = 0;
for(int i = 0;i<t;i++){
    sum = sum + a[i];
}


int max= a[0];
for(int i = 0;i<t;i++){
    if(a[i]>max){
        max = a[i];
    }
}
int totalLagbe= max*t;
int ageAche = totalLagbe -  sum;
cout<<ageAche;





    return 0;
}