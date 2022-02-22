//Zeferino Lino
//this is my own work with in class examples shown by professor
#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include "Address.h"
#include "Name.h"

using namespace std;

class Address {
private: 
    string streetAddress;
    string state;
    string zip;

public:
    Address();
    Address(string, string, string);
    void setStreetAddress(string);
    void setState(string);
    void setZip(string);
    string getStreetAddress() const;
    string getState() const;
    string getZip() const;
    string getFullAddress() const;
    friend ostream& operator<<(ostream&o, const Address&rhs);
    friend istream& operator>>(istream& in, Address& rhs);
};
#endif