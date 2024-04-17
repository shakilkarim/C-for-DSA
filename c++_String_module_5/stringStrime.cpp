#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    stringstream ss;
     ss << s;
     string word;
    int cnt = 0;
     while(ss >> word){
        cnt++;
     }
    if(cnt > s.size()){
        cout<<s.size();
    }else{
        cout<<cnt;
    }
   
    return 0;
}