#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    int freq[26] = {0}; // 0 - 25 -> 0
    for(int i= 0; i<n; i++){
        char c;
        cin>>c; // a => 122 -97 = 1
        freq[c - 'a']++;
    }
    for(int i=0; i<26; i++){
        cout<<"i = "<<i<<" , freq[i] = "<<freq[i]<<endl;
    }
    
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            for(int j = 0; j<freq[i]; j++){
                char ch = i + 'a'; // 3 +97 =100=> 'd'
                cout<<ch;
            }
        }
    }
    return 0;
}