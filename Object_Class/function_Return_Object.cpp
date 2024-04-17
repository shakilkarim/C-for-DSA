#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Students {
     public:
      char name[100];
      int roll;
      int cls;
      char section;

      Students(int r, char s,int c, char *n){
            roll = r;
            section = s;
            cls = c;
            strcpy(name,n);
      }
};
Students fun(){
    char nm[100] ="Rakib Ahamed"; 
    Students rakib(1,'A',10,nm);
    return rakib;
}
int main(){

    Students rakib = fun();
    cout<<rakib.section<<endl;
    // cout<<YoYo.cls<<endl;
    // cout<<YoYo.section<<endl;
    cout<<rakib.name<<endl;
    return 0;
}