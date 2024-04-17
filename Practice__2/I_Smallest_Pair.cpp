#include<bits/stdc++.h>
using namespace std;
int main() {
        
        int t;
        cin>>t;
        for(int i = 0; i<t; i++){
           long int minimum = INT_MAX;
           long  int value = 0;
            int n;
            cin>>n;
            int a[n];
            for(int i = 0; i<n; i++){
                cin>>a[i];
            }
            for(int i = 0; i<n-1; i++){
                for(int j = i+1; j<n; j++){
                 value = a[i]+a[j]+j-i;
                 minimum = min(minimum,value);
                }
            }
          cout<<minimum<<endl;
          
        }
    
    return 0;
}