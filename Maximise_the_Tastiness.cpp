#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
int a,b,c,d;
cin>>a>>b>>c>>d;

int sum = a+c;
int sum1= a+d;
int sum2= b+c;
int sum3= b+d;

int mx = max({sum,sum1,sum2,sum3});

cout<<mx<<endl;
}

    return 0;
}