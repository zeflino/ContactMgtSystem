//Zeferino Lino
//This is my own work

#ifndef NAME_H
#define NAME_H

#include <iostream>
#include "Address.h"
#include "Name.h"

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