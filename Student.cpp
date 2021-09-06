#include "Student.h"
#include <iostream>
using namespace std;
// Assign studentId and name
Student::assignDetails() {
void Student::assignDetails(int sid, char sName[]) {
studentId = sid;
strcpy(name,sName);
}

// Display StudentId and Name
Student::display() {
cout << studentId;
cout << name;
}
