#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

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
        
        Person(){};
        ~Person(){};
        Person(string name, int id){
            this->name = name;
            this->id = id;
        }

};







#endif
