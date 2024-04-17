#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    // cout<<s.size()<<endl;
    // cout<<s.max_size();

    // cout<<s.capacity()<<endl;
    
    // cout<<s.capacity();

    // cout<<s.size()<<endl;

    // s.clear();
    s.resize(2);
    cout<<s<<endl;
    s.resize(5,'Y');
    cout<<s;
    return 0;
}