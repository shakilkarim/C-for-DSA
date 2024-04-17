#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    int marks;
    
};
int main(){
    int n;
    cin>>n;
    Person a[n];
    
    
    for(int i = 0; i<3; i++){
         cin>>a[i].name>>a[i].age>>a[i].marks;
         cin.ignore();
         
    }

    for(int i =0; i<3; i++){
        cout<<a[i].name<<a[i].age<<a[i].marks<<endl;
    }

    // for(int i = 0; i<3; i++){
    //     cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].age<<endl;
    // }
    return 0;
}
