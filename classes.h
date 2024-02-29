#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <vector>

using namespace std;

class parent {
    private:
        string firstName;
        string lastName;
        int phoneNumber;
    public:
        parent();
        parent(string fn, string ln, int PN) : firstName(fn), lastName(ln), phoneNumber(PN) {}
        void setName(string fn, string ln);
        void setPhoneNum(int PN);
        string getFirstName();
        string getLastName();
        int getPhoneNum();
};

class teacher {
    private:
        string firstName;
        string lastName;
        int classNumber;
    public:
        teacher();
        teacher(string fn, string ln, int CN) : firstName(fn), lastName(ln), classNumber(CN) {}
        void setName(string fn, string ln);
        void setClassNum(int CN);
        string getFirstName();
        string getLastName();
        int getClassNum();
};

class child {
    private:
        string firstName;
        string lastName;
        unsigned int age;
        char gender;
        vector<string> allergies;
        parent parent1;
        parent parent2;
        teacher teach;
    public:
        child();
        child(string fn, string ln, unsigned int a, char g, vector<string> all, parent p1, parent p2, teacher t) :
            firstName(fn), lastName(ln), age(a), gender(g), allergies(all), parent1(p1), parent2(p2), teach(t) {}
        void setAll(string fn, string ln, unsigned int a, char g, vector<string> all, parent p1, parent p2, teacher t);
        void setName(string fn, string ln);
        void setAge(unsigned int a);
        void setGender(char g);
        void setAllergies(vector<string> all);
        void setParents(parent p1, parent p2);
        void setTeacher(teacher t);
        string getFirstName();
        string getLastName();
        unsigned int getAge();
        char getGender();
        vector<string> getAllergies();
        parent getParent1();
        parent getParent2();
        teacher getTeacher();
};

#endif