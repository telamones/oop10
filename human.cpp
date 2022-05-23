#include "human.h"

Human::Human(string s, string n, string m, int a) {
    surname = s;
    name = n;
    midname = m;
    age = a;
};


void Student::print () {
    cout << "Student: " << surname << " " << name << " " << midname << ", "<< age << " years, ";
    if (on_lesson==1) {
        cout << "was on lesson" << endl;
    } else {
        cout << "wasn't on lesson" << endl;
    }
};

void Boss::print() {
    cout << "Boss: "<< surname << " " << name <<  " " << midname << ", " << age  << " years, number of workers: " << number_of_workers << endl;
};