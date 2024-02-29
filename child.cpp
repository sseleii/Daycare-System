#include <iostream>
#include "classes.h"

using namespace std;

child::child() {
    vector<string> all = {"none"};
    parent p1;
    parent p2;
    teacher t;

    firstName = "";
    lastName = "";
    age = 0;
    gender = 'N';
    allergies = all;
    parent1 = p1;
    parent2 = p2;
    teach = t;
}

void child::setAll(string fn, string ln, unsigned int a, char g, vector<string> all, parent p1, parent p2, teacher t) {
    firstName = fn;
    lastName = ln;
    age = a;
    gender = g;
    allergies = all;
    parent1 = p1;
    parent2 = p2;
    teach = t;
}

void child::setName(string fn, string ln) {
    firstName = fn;
    lastName = ln;
}

void child::setAge(unsigned int a) {
    age = a;
}

void child::setGender(char g) {
    gender = g;
}

void child::setAllergies(vector<string> all) {
    allergies = all;
}

void child::setParents(parent p1, parent p2) {
    parent1 = p1;
    parent2 = p2;
}

void child::setTeacher(teacher t) {
    teach = t;
}

string child::getFirstName() {
    return firstName;
}

string child::getLastName() {
    return lastName;
}

unsigned int child::getAge() {
    return age;
}

char child::getGender() {
    return gender;
}

vector<string> child::getAllergies() {
    return allergies;
}

parent child::getParent1() {
    return parent1;
}

parent child::getParent2() {
    return parent2;
}

teacher child::getTeacher() {
    return teach;
}
