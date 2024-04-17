#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    string word;
    int flag = 0;
    string ra = "Ratul";
    stringstream ss(s);
    while(ss>>word){
        if(word == ra){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}