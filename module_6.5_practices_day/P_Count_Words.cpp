#include<bits/stdc++.h>
using namespace std;
int main(){

    string c;
    getline(cin,c);
    bool inside_word = false;
    int cnt = 0;
    
    for(char ch:c){
         if(isalpha(ch)){
            if(inside_word == false){
                cnt++;
            }
            inside_word = true;
         }else{
            inside_word = false;
         }
    }
    cout<<cnt;

    return 0;
}