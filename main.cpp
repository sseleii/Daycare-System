#include <iostream>
#include <fstream>
#include <string>
#include "classes.h"

int main() {

    string line, line2;
    unsigned int age, counter = 1;
    char gender;
    vector<string> allergies;
    ifstream iFile;
    vector<child> system;
    child child1;
    parent parent1;
    parent parent2;
    teacher teach;

    cout << "Welcome to Daycare System (Beta)!\n"
         << "Daycare System Will Now PROCEED.\n"
         << "Daycare System READS from a FILE TEXT Information About the Child's: \n"
         << "NAME (First and Last)\n"
         << "AGE\n"
         << "GENDER\n"
         << "Do You Wish to Proceed? (Y/N)\n";
    
    cin >> gender;

    if (gender == 'N') {
        return 0;
    }

    while (gender != 'Y') {
        cout << "Error: Please Select the Correct Choice.\n"
             << "Do You Wish to Proceed? (Y/N)\n";
        cin.ignore(1, '\n');
        cin >> gender;
    }

    iFile.open("daycare.txt");

    while (!iFile.is_open()) {
        cout << "Error: Daycare File Could be Opened.\n"
             << "Please Manually Input Daycare File.\n";
        cin >> line;
        iFile.open(line);
    }

    getline(iFile, line);

    do {
        iFile >> line >> line2;
        child1.setName(line2, line);

        iFile >> age;
        child1.setAge(age);

        iFile >> gender;
        if (gender != 'F' && gender != 'M' && gender != 'N' ||
            cin.fail()) {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Error: Gender\n"
                 << "Please Fix Gender for Child on Line " << counter+1 << endl;
            return 0;
        }
        child1.setGender(gender);

        iFile >> line;

        if (line[line.length()-1] == ',') {
            while (line[line.length()-1] == ',') {
                line = line.substr(0, line.length()-1);
                allergies.push_back(line);
                iFile >> line;
                if (line[line.length()-1] != ',') {
                    allergies.push_back(line);
                } else {
                    line = line.substr(0, line.length()-1);
                    allergies.push_back(line);
                }
            }
        } else {
            allergies.push_back(line);
        }

        child1.setAllergies(allergies);

        iFile >> line >> line2;
        parent1.setName(line, line2);
        
        iFile >> line >> line2;
        parent2.setName(line, line2);

        child1.setParents(parent1, parent2);

        iFile >> line >> line2;
        teach.setName(line, line2);

        child1.setTeacher(teach);

        system.push_back(child1);
        counter++;
    } while (!iFile.eof());

    cout << "\nFirst Name: " << system[0].getFirstName()
         << "\nLast Name: " << system[0].getLastName()
         << "\nAge: " << system[0].getAge()
         << "\nGender: " << system[0].getGender()
         << "\nAllergies: ";

    counter = 0;

    while (system[0].getAllergies().size() != counter) {
        line = system[0].getAllergies()[counter];
        if (counter == system[0].getAllergies().size()-1) {
            cout << line << endl;
        } else {
            cout << line << ", ";
        }
        counter++;
    }

    cout << "\nParent1 Name: " << system[0].getParent1().getFirstName() << " "
                               << system[0].getParent1().getLastName()
         << "\nParent2 Name: " << system[0].getParent2().getFirstName() << " "
                               << system[0].getParent2().getLastName()
         << "\nTeacher Name: " << system[0].getTeacher().getFirstName() << " "
                               << system[0].getTeacher().getLastName() << endl;

    iFile.close();

}
