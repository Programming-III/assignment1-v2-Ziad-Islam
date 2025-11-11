#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here


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
            currentStudents = 0;
        }
};











#endif
