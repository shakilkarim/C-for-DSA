#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    for(int i = 0; i<n; i++){
        int m;
        cin>>m;
        string s;
        cin>>s;
        int frq[26] = {0};

        int sum = 0;

        for(int j = 0; j<m; j++){
            if(frq[s[j] - 'A'] == 0){
                sum += 2;
                frq[s[j] - 'A']++;
            }else{
                sum+= 1;
            }
        }

        cout<<sum<<endl;


    }
    return 0;
}