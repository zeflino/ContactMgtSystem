//Zeferino Lino
//this is my own work with in class examples shown by professor
#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <cstdlib>
#include "Address.h"
#include "Name.h"

using namespace std;

class Contact {
private:
    Name name;
    Address address;
    string phone;
    int identifier;
    int totalCt;
    //update idetifier if objectdoesn't have one
    void setIdentifier();
public:
    Contact();
    Contact(string, string, string, string, string, string);
    Contact(const Contact&);
    string getName() const;
    string getAddress() const;
    string getPhone();
    int getIdentifier() const;
    void setName(string, string);
    void setAddress(string, string, string);
    void setPhone(string);
    friend ostream& operator<<(ostream&, const Contact&);
    friend istream& operator>>(istream&, Contact);
};
#endif