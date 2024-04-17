#include<bits/stdc++.h>
using namespace std;
namespace laptop{
        string name = "Dell";
        int price = 200000;

        void dell(){
            cout<<"Best Quality laptop";
        } 
}
namespace Mobile{
        string name2 = "ipad";
        int price2 = 500000;

        void ipad(){
            cout<<"Best Quality laptop";
        } 
}
using namespace laptop;
using namespace Mobile;
int main(){

    cout<<name<<price2;
    return 0;
}