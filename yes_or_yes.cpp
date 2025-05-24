#include<bits/stdc++.h>
using namespace std;
int main (){


int t;
cin>>t;

while(t--){
    string s1;
    cin>>s1;
    if(s1.size()==3&&
        (s1[0]=='y'||s1[0]=='Y')&&
        (s1[1]=='e'||s1[1]=='E')&&
        (s1[2]=='S'||s1[2]=='s')){
        cout<<"YES"<<endl;
    }

else{
    cout<<"NO"<<endl;


}
}

    return 0;
}
