#include<bits/stdc++.h>
using namespace std;

void fun(stringstream & ss){
        string word;
        if(ss>>word){
            fun(ss);
            cout<<word<<endl;
            
        }
  }
int main(){

    string str;
    getline(cin, str);
     
    stringstream ss(str);
    // string word;
    fun(ss);
    // while(ss>>word){
    //     cout<<word<<endl;
    // }
     return 0;
}