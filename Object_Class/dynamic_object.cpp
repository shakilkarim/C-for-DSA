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
int main(){

    
    
    char nm[100] = "Rura";
    Students * nura = new Students(03,'A',10,nm);

    cout<<nura->name<<nura->cls<<endl;

    // delete nura;
     
    
    return 0;
}