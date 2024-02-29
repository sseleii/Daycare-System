#include <iostream>
#include "classes.h"

parent::parent() {
    firstName = "N/A";
    lastName = "";
    phoneNumber = -1;
}

void parent::setName(string fn, string ln) {
    firstName = fn;
    lastName = ln;
}

void parent::setPhoneNum(int PN) {
    phoneNumber = PN;
}

string parent::getFirstName() {
    return firstName;
}

string parent::getLastName() {
    return lastName;
}

int parent::getPhoneNum() {
    return phoneNumber;
}
