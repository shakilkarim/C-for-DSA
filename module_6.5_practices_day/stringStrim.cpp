#include<bits/stdc++.h>
using namespace std;
int main(){

    string c;
    getline(cin,c);
   
    stringstream ss(c);

    string word;
     int cnt = 0;
    ss>>word;
    cout<<word;
   
    while(ss>>word){
        cnt++;
        cout<<word;
    }

    cout<<cnt<<" ";
    

    return 0;
}