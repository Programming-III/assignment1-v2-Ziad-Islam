#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
using namespace std;

// ==================== Person Class Implementation =========================




class Person {
    private:
        string name;
        int id;
    public:
        void display(){
            cout << "Name: " << name << endl << "ID: " << id << endl;
        }
        string getName(){
            return name;
        }
        int getID(){
            return id;
        }

        void setName(string name){
            this->name = name;
        }
        void setID(int id){
            this->id = id;
        }
        
        Person(){};
        ~Person(){};
        Person(string name, int id){
            this->name = name;
            this->id = id;
        }

};



// ==================== Student Class Implementation ====================


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



// ==================== Instructor Class Implementation ====================



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


// ==================== Course Class Implementation ====================




class Course {
    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;
        int currentStudents;
        
    public:
        void addStudent(const Student& s){
            if(currentStudents == maxStudents){
                cout << "Unable to add student." << endl;
            } else {
                students[currentStudents] = s;
                currentStudents++;
            }
            
        }
        
        void displayCourseInfo(){
            cout << "Course: " << courseCode << " - " << courseName << endl;
            cout << "Max Students: " << maxStudents << endl;
            cout << "Currently Enrolled: ";
            for(int i = 0; i<currentStudents; i++){
                cout << students[i].getName() << " (ID: " << students[i].getID() << ") ";
            }
        }
        
        Course(){};
        ~Course(){};
        Course(string courseCode, string courseName, int maxStudents){
            this->courseCode = courseCode;
            this->courseName = courseName;
            this->maxStudents = maxStudents;
            students = {};
            currentStudents = 0;
        }
};



// ==================== Main Function ====================
int main(){
    Course x("CS101", "Introduction to Programming", 3);
    
    Student omar(2, "Informatics");
   omar.setName("Omar Nabil");
   omar.setID(2202);
   
   Instructor lina("Computer Science", 5);
   lina.setName("Dr. Lina Khaled");
   
    // x.addStudent(omar); "segmentation fault"
   
    x.displayCourseInfo();
    lina.display();
    omar.display();
    return 0;
}

