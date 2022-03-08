
#include "StudentAccount.h"
#define Size 1000

class StudentDB
{
    private:
    StudentAccount Database[Size];
    int top;

    public:
    StudentDB ();
    ~StudentDB ();

    int Searching (string s);
    void Admin();
    void Student();
    void New_Account ();
    void Delete_Account ();
    void Edit_Student_Profile ();
    void Information_Of_A_Student ();
    void Information_Of_All_Student ();
    void Database_Operator ();
    void List_Of_Student ();


};

