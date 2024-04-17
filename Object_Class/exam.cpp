#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Person {
     public:
      char name[100];
      float height;
      int age;
      

      Person(float h,int a, char *n){
            height = h;
            age = a;
            strcpy(name,n);
      }
};
int main(){

    
    
    char nm[100] = "Shakib";
    Person * shakib = new Person(5.7,27,nm);

    char rk[100] = "Rakib";
    Person * rakib = new Person(6,29,rk);


    if(shakib->age > rakib->age){

        cout<<shakib->age;
    }else{
        cout<<rakib->age;
    }
    
    // delete nura;
     
    
    return 0;
}