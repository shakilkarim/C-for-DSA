#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    int leg;

    Person(string na,int ag){
        this->name = na;
        this->age = ag;

    }
    void demo(){
        cout<<this->age;
    }
    

};

int main(){
    Person Shakil = Person("shakil", 27);
    cout<<Shakil.age;
    Shakil.demo();
    return 0;
}