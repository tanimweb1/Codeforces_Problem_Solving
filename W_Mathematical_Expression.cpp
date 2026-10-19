#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
char s,q='=';

cin>>a>>s>>b>>c;
int ans1 = a+b;
int ans2= a-b;
int ans3= a*b;
if(a+b==c&&s=='+'&&q=='=' ){
    cout<<"Yes"<<endl;
}
else if(s=='-'&& a+b==c){
    cout<<"Yes"<<endl;
}
else if(s=='*'&& a*b==c){
    cout<<"Yes"<<endl;
}
else if(ans1!=c ||ans2!=c||ans3!=c){

    if(s=='+'){
        cout<<a+b<<endl;
    }

    else if(s=='-'){
        cout<<a-b<<endl;
    }
    
   else if(s=='*'){
        cout<<a*b<<endl;
    }
}




    return 0;
}