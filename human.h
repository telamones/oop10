#ifndef OOP10_HUMAN_H
#define OOP10_HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human {
protected:
    string surname;
    string name;
    string midname;
    int age;

public:
    Human(string="", string="", string="", int=0);
    virtual void print() = 0;
    ~Human() {};
};

class Student : Human {
private:
    bool on_lesson;

public:
    Student(string s="0", string n="0", string m="0", int a=0, bool o=0) : Human(s, n, m, a) {
        on_lesson = o;
    };
    void print();
    ~Student() {};
};

class Boss : Human {
private:
    int number_of_workers;

public:
    Boss(string s="", string n="", string m="", int a=0, int w=0) : Human(s, n, m, a) {
        number_of_workers = w;
    };
    void print();
    ~Boss() {};
};

#endif //OOP10_HUMAN_H
