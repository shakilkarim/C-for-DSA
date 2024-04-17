#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    string word;
    
    stringstream ss(s);
    ss>>word;
    cout<<word;
    while(ss>>word){
        reverse(word.begin(), word.end());
        cout<<" "<<word;
    }
   
    return 0;
}