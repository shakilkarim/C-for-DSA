#include<bits/stdc++.h>
using namespace std;
class Car {
    public:
        string name;
        int price;
        string color;

        Car (string name,int price, string color){

            this->name = name;
            this->price = price;
            this->color = color;

        }

};
int main(){

    Car * pajero =new Car("Pajero", 10000000, "Red");
    Car * allion =new Car("allion", 1000000, "red");
    // pajero->color = "bule";
    if(pajero->price > allion->price){
        cout<<"pajeron is bigger than allion";
    }else{
        cout<<"allion bigger";
    }
    cout<<pajero->color<<endl;
    cout<<allion->name;
    return 0;
}