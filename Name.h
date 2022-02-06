//Zeferino Lino
//This is my own work

#ifndef NAME_H
#define NAME_H

#include <string>
#include <iostream>

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
    string getLName() const string;
    

};



#endif