//Zeferino Lino
//this is my own work with in class examples shown by professor

#ifndef NAME_H
#define NAME_H

#include <iostream>
#include "Address.h"

using namespace std;

class Name {
private:
    string fName;
    string lName;

public:
    Name();
    Name(string, string);
    void setLName(string);
    void setFName(string);
    string getLName() const ;
    string getFName() const;
    string getFullName() const;
    friend ostream& operator<<(ostream&o , const Name&rhs);
    friend istream& operator>>(istream&in, Name&rhs);
};
#endif