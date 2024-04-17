#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks;

public:
    int price;
};
int main()
{

    Person a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].marks >> a[i].price;
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << endl
             << a[i].age << endl
             << a[i].marks << endl
             << a[i].price << endl;
    }
    return 0;
}