#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b;
char c;
cin>>a>>c>>b;

 if(a<0&& b<0){
    if(c=='>'&&a>b ){
        cout<<"Right"<<endl;
    }
   else if(c=='<'&&a<b ){
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
}
///A- minus hole 
 if(a<0){
    if(c=='<'&&a<b ){
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
}

///B Minus hole 



else if(c=='>' &&a>b){
    cout<<"Right"<<endl;
}
else if(c=='>' &&b>a){
    cout<<"Right"<<endl;
}
else if(c=='=' &&a==b){
    cout<<"Right"<<endl;
}

else {
 cout<<"Wrong"<<endl;
}





    return 0;
}