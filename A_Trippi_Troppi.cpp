#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
cin.ignore();
while(t--){
string s;
getline(cin,s);

stringstream ss(s);
string t;

while(ss>>t){

    cout<<t[0];

}
cout<<endl;



}






    return 0;
}