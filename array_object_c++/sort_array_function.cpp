#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    int marks;
    
};

bool tem (Person a, Person b){
        if(a.marks > b.marks) {
            return true;
        }else{
            return false;
        }
}
int main(){
    int n;
    Person a[3];
    
    
    for(int i = 0; i<3; i++){
         getline(cin,a[i].name);
         cin>>a[i].age>>a[i].marks;
         cin.ignore();
         
    }

   sort(a,a+3,tem);

    for(int i = 0; i<3; i++){
        cout<<a[i].name<<" "<<a[i].marks<<" "<<a[i].age<<endl;
    }
    return 0;
}
