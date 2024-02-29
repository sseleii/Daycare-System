#include <iostream>
#include "classes.h"

teacher::teacher() {
    firstName = "";
    lastName = "";
    classNumber = -1;
}

void teacher::setName(string fn, string ln) {
    firstName = fn;
    lastName = ln;
}

void teacher::setClassNum(int CN) {
    classNumber = CN;
}

string teacher::getFirstName() {
    return firstName;
}

string teacher::getLastName() {
    return lastName;
}

int teacher::getClassNum() {
    return classNumber;
}
