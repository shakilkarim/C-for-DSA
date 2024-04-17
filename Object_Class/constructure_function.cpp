#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Students {
     public:
      char name[100];
      int roll;
      int cls;
      char section;

    //   Students(int r, char s,int c, char *n){
    //         roll = r;
    //         section = s;
    //         cls = c;
    //         strcpy(name,n);
    //   }
};
int main(){

    Students YoYo;
    // Students Sony(03,'A',10,"Sony Mirza");
    cout<<sizeof(YoYo)<<endl;
    // cout<<YoYo.cls<<endl;
    // cout<<YoYo.section<<endl;
    // cout<<YoYo.name<<endl;
    return 0;
}