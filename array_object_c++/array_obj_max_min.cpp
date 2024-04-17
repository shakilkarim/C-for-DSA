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
    Person a[3];
    
    
    for(int i = 0; i<3; i++){
         getline(cin,a[i].name);
         cin>>a[i].age>>a[i].marks;
         cin.ignore();
         
    }
    Person mx;
    mx.marks = INT_MIN;

    for(int i = 0; i<3; i++){
         if(a[i].marks > mx.marks){
             mx = a[i];
         }

    }

   cout<<mx.name<<" "<<mx.age<<" "<<mx.marks;
    // for(int i = 0; i<n; i++){

    // }
    return 0;
}
