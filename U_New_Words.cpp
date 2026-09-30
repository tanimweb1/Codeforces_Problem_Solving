#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int counte =0,countg=0,county=0,countp=0,countt=0;
for(char c:s){
    if(c=='e'||c=='E'){
        counte++;
    }
   else if(c=='g'||c=='G'){
        countg++;
    }
   else if(c=='y'||c=='Y'){
        county++;
    }
    else if(c=='p'||c=='P'){
        countp++;
    }
    else if(c=='t'||c=='T'){
        countt++;
    }
}
if(counte ==0 || countg==0|| county==0||countp==0||countt==0){
    cout<<"no";
}
int ans = min({counte,countg,county,countp,countt});
int desh = ans+ans+ans+ans+ans;
int sol = desh/5;
cout<<sol<<endl;






    return 0;
}