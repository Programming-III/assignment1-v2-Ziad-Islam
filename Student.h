#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here



class Student : public Person {
    private:
        int yearLevel;
        string major;
    public:
        void display(){
            Person::display();
            cout << "Year: " << yearLevel << endl << "Major: " << major << endl;
        }
        Student(){};
        ~Student(){};
        Student(int yearLevel, string major){
            this->yearLevel = yearLevel;
            this->major = major;
        }

};









#endif
