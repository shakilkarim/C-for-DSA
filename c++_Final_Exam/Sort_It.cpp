#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
};
bool tem(Student a, Student b){
    int marks1 = a.math_marks + a.eng_marks;
    int marks2 = b.math_marks + b.eng_marks;

    if(marks1 == marks2){
        return a.id < b.id;
    }

    return marks1 > marks2;


}
int main(){

    int n;
    cin>>n;
    Student a[n];
    for(int i =0; i<n; i++){
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
   sort(a,a+n,tem);
    for(int i =0; i<n; i++){
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    
    return 0;
}