#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        int even = 0;
        int odd = 0;
        for(int j =0; j<n; j++){
            cin>>a[j];
            if(a[j] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }
     
     int difference = abs(even - odd);
    if(n % 2 == 0){
        cout<<-1;
    } else if(difference % 2 == 0) {
        int minOperations = difference / 2;
        cout<<minOperations<<endl;
    } 

    }
    return 0;
}