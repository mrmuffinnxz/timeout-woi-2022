#include<bits/stdc++.h>
using namespace std;

struct Book{
    string name;
    int price;
    int pages;
};

main() {
    struct Book b1;
    b1.name = "C++ Programming";
    b1.price = 10;
    b1.pages = 200;

    struct Book *p = &b1;
    struct Book *p2 = p;
    int *p1 = &b1.price;

    cout << b1.name << " " << p->name << "\n";
    p->name = "Python Programming\n";
    cout << b1.name;
    cout << p2->name << "\n";
}