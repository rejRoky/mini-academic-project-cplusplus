
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class StudentAccount {
private:
    string First_Name; //Student's First Name
    string Last_Name; //Student's Last Name
    string ID; //student's ID Number
    string DOB; // Student's Date of birth
    string FA; //Student's Faculty
    string DEP; //Student's Department
    double CGPA; //Student's cgpa
public:
    StudentAccount ();
    ~StudentAccount ();

    void Set_First_Name (string &x);
    string Get_First_Name ();

    void Set_Last_Name (string &x);
    string Get_Last_Name ();

    void Set_ID (string &x);
    string Get_ID ();

    void Set_DOB (string &x);
    string Get_DOB ();

    void Set_FA (string &x);
    string Get_FA ();

    void Set_DEP (string &x);
    string Get_DEP ();

    void Set_CGPA (double &r);
    double Get_CGPA ();

    void Display ();
};
