#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
};
int main(){

    int n;
    cin>>n;
    Student a[n];
    for(int i =0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }

    for (int i = 0; i < n / 2; ++i) {
        int temp = a[i].id;
        a[i].id = a[n - i - 1].id;
        a[n - i - 1].id = temp;
    }
    
    for(int i =0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    
    return 0;
}


