#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here




class Instructor : public Person {
    private:
        string department;
        int experienceYears;
    public:
        void display(){
            Person::display();
            cout << "Department: " << department << endl << "Experience: " << experienceYears << " years"<< endl;
        }
        Instructor(){};
        ~Instructor(){};
        Instructor(string department, int experienceYears){
            this->department = department;
            this->experienceYears = experienceYears;
        }
};







#endif
