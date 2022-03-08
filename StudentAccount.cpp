#include "StudentAccount.h"

StudentAccount :: StudentAccount()
{
    CGPA = 0;
}

StudentAccount :: ~StudentAccount()
{

}

void StudentAccount :: Set_First_Name (string &x)
{
    First_Name = x;
}
string StudentAccount :: Get_First_Name ()
{
    return First_Name;
}


void StudentAccount :: Set_Last_Name (string &x)
{
    Last_Name = x;
}
string StudentAccount :: Get_Last_Name ()
{
    return Last_Name;
}


void StudentAccount :: Set_ID (string &x)
{
    ID = x;
}
string StudentAccount :: Get_ID ()
{
    return ID;
}


void StudentAccount :: Set_DOB (string &x)
{
    DOB = x;
}
string StudentAccount :: Get_DOB ()
{
    return DOB;
}


void StudentAccount :: Set_FA (string &x)
{
    FA = x;
}
string StudentAccount :: Get_FA ()
{
    return FA;
}


void StudentAccount :: Set_DEP (string &x)
{
    DEP = x;
}
string StudentAccount :: Get_DEP ()
{
    return DEP;
}


void StudentAccount :: Set_CGPA (double &r)
{
    CGPA = r;
}
double StudentAccount :: Get_CGPA ()
{
    return CGPA;
}


void StudentAccount :: Display ()
{
    cout << "First Name    : " << Get_First_Name() << endl;
    cout << "Last Name     : " << Get_Last_Name() << endl;
    cout << "ID Number     : " << Get_ID() << endl;
    cout << "Data of Birth : " << Get_DOB() << endl;
    cout << "Faculty Name  : " << Get_FA() << endl;
    cout << "Department    : " << Get_DEP() << endl;
    cout << "CGPA          : " << Get_CGPA() << endl;
}
