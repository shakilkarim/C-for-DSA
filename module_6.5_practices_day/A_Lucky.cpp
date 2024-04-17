#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i<s.size(); i++){
            if(i < 3){
                sum1  += s[i] - '0'; 
            }else{
                sum2 += s[i] - '0';
            }
           
        }
         if(sum1 == sum2){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
        
    }
    return 0;
}


