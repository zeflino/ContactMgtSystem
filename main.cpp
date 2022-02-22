//Zeferino Lino
//this is my own work with in class examples shown by professor

#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "Contact.h"
#include "Name.h"
#include "Address.h"

using namespace std;

void loadContact(istream& in, vector<Contact>& lst);
void saveContacts(ostream& out, const vector<Contact>& lst);
void addContact(vector<Contact>& lst);

int main() {

    //user input
    ifstream fin("contact.txt");
    //output
    ofstream fout("Text.txt");

    //vector holding the contacts
    vector<Contact> userContacts;

    //fundtion to load the user input contacts
    loadContact(fin, userContacts);

    //adding contacts
    for (int i = 0; i < 2; i++) {
        addContact(userContacts);
    }

    //saving
    saveContacts(fout, userContacts);
    
    //closing user .txt file
    fin.close();
    fout.close();

    return 0;
}

void saveContact(ostream& out, const vector<Contact>& lst) {

    for (int index = 0; index < lst.size(); index++) {
        out << lst[index] << endl;
    }

}

void addContact(vector<Contact>& lst) {

    //saving contact info using get line in order to ensure everything is obtained
    string firstName, lastName, address, state, zip, phone;
    cout << "Enter the following information for your contact" << endl;
    cout << "First name: ";
    getline(cin, firstName);
    cout << "Last name: ";
    getline(cin, lastName);
    cout << "Street Address: ";
    getline(cin, address);
    cout << "State: ";
    getline(cin, state);
    cout << "Zip Code: ";
    getline(cin, zip);
    cout << "Phone: ";
    getline(cin, phone);

    //creating the contact off of the user input
    Contact newContact(firstName, lastName, address, state, zip, phone);

    //addincontact to the vector
    lst.push_back(newContact);

}