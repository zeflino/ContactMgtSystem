//Zeferino Lino
//this is my own work with in class examples shown by professor
#include "Contact.h"

Contact::Contact() {
    this->name = Name();
    this->address = Address();
    this->phone = "xxx-xxx-xxxx";
    this->identifier = -1;
    
}

int Contact::totalCt = 0;

void Contact::setIdentifier() {
    totalCt++;
    identifier = totalCt;
}

Contact::Contact(string fName, string lName, string street, string state, string zip) {
    this->name = Name(fName, lName);
    this->address = Address(street, state, zip);
    this->phone = phone;
    this->identifier = totalCt;
}

Contact::Contact(const Contact& c) {
    this->name = c.name;
    this->address = c.address;
    this->phone = c.phone;
    this->identifier = c.identifier;
}

//getters
string Contact::getName() const {
    return name.getLName() + ", " + name.getFName();
}
string Contact::getAddress() const {
    return address.getStreetAddress() + "\n" + address.getState() + "\n" + address.getZip();
}
string Contact::getPhone() {
    return phone;
}
int Contact::getIdentifier() const {
    return identifier;
}


//setters
void Contact::setName(string firstName, string lastName) {
    name.setFName(firstName);
    name.setLName(lastName);
}
void Contact::setAddress(string street, string state, string zip) {
    address.setStreetAddress(street);
    address.setState(state);
    address.setZip(zip);
}
void Contact::setPhone(string phone) {
    this->phone = phone;
}
void Contact::setIdentifier() {
    totalCt++;
    identifier = totalCt;
}

//overriding input so we can print future contacts because you can't using "cout"
istream& Contact::operator>>(istream& in, Contact& rhs) {
    in >> rhs.name;
    in >> rhs.address;
    getline(in,rhs.phone);
    rhs.setIdentifier();
    return in;
}
ostream& Name::operator<<(ostream& out, const Name& rhs) {
    out << rhs.contact.identifier << "\n" << rhs.getLName() << "\n" << rhs.getFName() << "\n" << rhs.address.address() << "\n" << rhs.address.getState() << "\n" << rhs.address.getZip() << "\n" << rhs.contact.getPhone();
    return out;
}

#endif