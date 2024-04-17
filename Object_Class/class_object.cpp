#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Students {
     public:
      char name[100];
      int roll;
      int cls;
      char section;
};
int main(){

    Students shakib;
    shakib.roll = 32;
    char nm[100] = "shakil";
    strcpy(shakib.name, nm);
    shakib.cls = 9;
    shakib.section = 'A';

     Students rakib;
    rakib.roll = 100;
    char rk[100] = "rakib";
    strcpy(rakib.name, rk);
    rakib.cls = 11;
    rakib.section = 'A';

    cout<<rakib.roll<<endl;
    cout<<rakib.cls<<endl;
    cout<<rakib.section<<endl;
    cout<<rakib.name;
    return 0;
}