#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    if(s == '+' && q == '=' && a + b == c){
        cout<<"Yes";
    }else if(s == '-' && q == '=' && a - b == c){
         cout<<"Yes";
    }else if(s == '*' && q== '=' && a * b == c) {
        cout<<"Yes";
    }else {
        if(s == '+' && q == '='){
            cout<<a + b;
        }
        else if(s == '-' && q == '='){
            cout<<a - b;
        }
        else if(s == '*' && q == '='){
            cout<<a * b;
        }
    }
    return 0;
}