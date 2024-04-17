#include<bits/stdc++.h>
using namespace std;
int main(){

    string a = "shakil";
    string b = "karim";

    // a += b;
    b.append(a);
    cout<<b<<endl;

    a.push_back('a');
    cout<<a<<endl;
    a.pop_back();
    cout<<a;
    return 0;
}