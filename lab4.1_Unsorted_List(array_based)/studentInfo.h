#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class studentInfo {
private:
    int id;
    string name;
    float cgpa;

public:
    // Default Constructor
    studentInfo()
    {
        id=0;
        name="";
        cgpa=0.0;
    }

    // Parameterized Constructor
    studentInfo(int i, string n, float c)
    {
        id=i;
        name=n;
        cgpa=c;

    }
    void Print(){
        cout << id << ", " << name << ", " << cgpa << endl;
    }

    // Overloaded operators for comparison
    bool operator==(const studentInfo& other) const {
        return id == other.id;
    }

    bool operator!=(const studentInfo& other) const {
        return id != other.id;
    }

    // Assignment operator
    studentInfo& operator=(const studentInfo& other) {
        if (this != &other) {
            id = other.id;
            name = other.name;
            cgpa = other.cgpa;
        }
        return *this;
    }
};

#endif // STUDENTINFO_H_INCLUDED
