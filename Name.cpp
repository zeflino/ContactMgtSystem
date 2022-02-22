//Zeferino Lino
//this is my own work with in class examples shown by professor
#include "Name.h"

using namespace std;

ostream& operator<<(ostream& o, const Name& rhs) {
    o << rhs.lName << ", " << rhs.fName;
    return o;
}

istream& operator>>(istream& in, Name& rhs) {
    getline(in, rhs.lName);
    getline(in, rhs.fName);
    return in;
}

Name::Name() {
    fName = "";
    lName = "";
}

Name::Name(string fName, string lName) {
    this->fName = fName;
    this->lName = lName;
}

//getters
string Name::getFName() const{
    return fName;
}
string Name::getLName() const{
    return lName;
}
string Name::getFullName () const{
    return fName + ", " + lName;
}

//setters
void Name::setLName(string n) {
    lName = n;
}
void Name::setFName(string n) {
    fName = n;
}