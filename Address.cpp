#include "Address.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& in, Address& rhs) {
    getline(in, rhs.streetAddress);
    getline(in, rhs.state);
    getline(in, rhs.zip);

    return in;
}

ostream& operator<<(ostream&o, const Address&rhs) {
    o << rhs.streetAddress << ", " << rhs.state << ", " << rhs.zip;
    return o;
}

Address::Address() {
    streetAddress = "";
    state = "";
    zip = "";
}

Address::Address(string streetAddress, string state, string zip) {
    this->streetAddress = streetAddress;
    this->state = state;
    this->zip = zip;
}

//getters
string Address::getStreetAddress() const {
    return streetAddress;
}
string Address::getState() const {
    return state;
}
string Address::getZip() const {
    return zip;
}
string Address::getFullAddress() const {
    return streetAddress + "\n" + state + "\n" + zip;
}

//setters
void Address::setStreetAddress(string streetAddress) {
    this->streetAddress = streetAddress;
}
void Address::setState(string state) {
    this->state = state;
}
void Address::setZip(string zip) {
    this->zip = zip;
}