#include<bits/stdc++.h>
using namespace std;

struct Book{
    string name;
    int price;
    int pages;
};

struct Student{
    string name;
    int age;
    struct Book book;
};

main() {
    struct Student s1;
    s1.book.name = "C++ Programming";
    s1.name = "John";
    s1.age = 20;

    struct Student s2 = s1;
    cout << s2.name << "\n";
    cout << s2.book.name << "\n";

    s1.name = "Ken";

    cout << s1.name << " " << s2.name;
}