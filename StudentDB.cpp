#include "StudentDB.h"
StudentDB ::StudentDB ()
    {
        top = 0;
    }

StudentDB ::~StudentDB ()
    {

    }


int StudentDB :: Searching (string s) {
    for (int i = 0; i < top; i++) {
        if (Database[i].Get_ID() == s) {
            return i;
        }
    }
    return -1;
}


void StudentDB :: New_Account ()
{
    string FN, LN, ID, DOB, FA, DEP;
    double CGPA;

    cout << "Put Your First Name : ";
    cin >> FN;
    Database[top].Set_First_Name(FN);

    cout << "Put Your Last Name : ";
    cin >> LN;
    Database[top].Set_Last_Name(LN);

    cout << "Put Your ID number : ";
    cin >> ID;
    Database[top].Set_ID(ID);

    cout << "Put Your Data of Birth : ";
    cin >> DOB;
    Database[top].Set_DOB(DOB);

    cout << "Put Your Faculty Name : ";
    cin >> FA;
    Database[top].Set_FA(FA);

    cout << "Put Your Department Name : ";
    cin >> DEP;
    Database[top].Set_DEP(DEP);

    cout << "Put Your CGPA Mark : ";
    cin >> CGPA;
    Database[top].Set_CGPA(CGPA);

    top++;

}


void StudentDB :: Delete_Account() {
    string s;
    cout << "Enter Your ID Number: ";
    cin >> s;

    int m = Searching(s);
    if ( m > -1)
    {
        for(int i = m; i < top; i++)
        {
            Database[m] = Database[m+1];
            top--;
        }
        cout << "\n****Deletting Successful****" << endl;
    }
    else
    {
        cout << "Invalid Student" << endl;
    }
}


void StudentDB :: Edit_Student_Profile()
{
    string s;
    cout << "Put Your ID Number: ";
    cin >> s;

    int m = Searching(s);
    if ( m > -1)
    {
        string FN, LN, ID, DOB, FA, DEP;
        double CGPA;

        cout << "Put New Your First Name : ";
        cin >> FN;
        Database[top].Set_First_Name(FN);

        cout << "Put New Your Last Name : ";
        cin >> LN;
        Database[top].Set_Last_Name(LN);

        cout << "Put New Your ID number : ";
        cin >> ID;
        Database[top].Set_ID(ID);

        cout << "Put New Your Data of Birth : ";
        cin >> DOB;
        Database[top].Set_DOB(DOB);

        cout << "Put New Your Faculty Name : ";
        cin >> FA;
        Database[top].Set_FA(FA);

        cout << "Put New Your Department Name : ";
        cin >> DEP;
        Database[top].Set_DEP(DEP);

        cout << "Put New Your CGPA Mark : ";
        cin >> CGPA;
        Database[top].Set_CGPA(CGPA);
    }
    else
    {
        cout << "Invalid Student" << endl;
    }
}


void StudentDB :: Information_Of_A_Student ()
{
    string s;
    cout << "Put Your ID Number: ";
    cin >> s;

    int m = Searching(s);
    if ( m > -1)
    {
        cout << "\n" << endl;
        Database[m].Display();
    }
    else
    {
        cout << "Invalid Student" << endl;
    }
}


void StudentDB :: Information_Of_All_Student ()
{

    cout << "Number of student is : " << top << "\n" << endl;
    if(top != 0)
    {

        for(int i = 0; i < top; i++)
        {
            cout << "\nSerial number : " << i+1 << endl;
            Database[i].Display();
            cout << "\n\n" << endl;
        }
    }
    else
    {
        cout << "List is now empty" << endl;
    }

}


void StudentDB :: List_Of_Student()
{
    cout << "Number of student is : " << top << endl;
    if(top != 0)
    {
        cout << "\nID Number :" << endl;
        for(int i = 0; i < top; i++)
            {
                cout << "\n" << Database[i].Get_ID() << endl;
            }
    }
    else
    {
        cout << "\nList is now empty" << endl;
    }

}

void StudentDB :: Admin()
{
    char ch = '\0';
    while (ch != 'E' && ch != 'e')
    {
        int s;
        cout << "\n\t  Press 1: Information of all Student" << endl;
        cout << "\t  Press 2: List of Student" << endl;
        cout << "\t  Press 3: Stop Whole Program" << endl;
        cin >> s;
        switch (s)
        {

            case 1:
            system("cls");
            Information_Of_All_Student();
            break;

            case 2:
            system("cls");
            List_Of_Student();
            break;

            case 3:
            cout << "\n\t******** Thank you *******" << endl;
            exit(0);
            break;

            default:
            cerr << "\tYou press worng key..\n\t Press 1 or 2 " << endl;
            break;

        }
        cout << "\n\tPress E for goto Main Menu\nOr Enter Any key for Admin Account Menu" << endl;
        cin >> ch;
        system("cls");
    }
}

void StudentDB :: Student()
{
    char ch = '\0';
    while (ch != 'e' && ch != 'E')
    {
        int s;
        cout << "\n\t  Press 1: Open A New Account" << endl;
        cout << "\t  Press 2: Delete Account" << endl;
        cout << "\t  Press 3: Edit Profile" << endl;
        cout << "\t  Press 4: Information of a Account" << endl;
        cout << "\t  Press 5: Stop Whole Program" << endl;

        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            New_Account();
            break;

            case 2:
            system("cls");
            Delete_Account();
            break;

            case 3:
            system("cls");
            Edit_Student_Profile();
            break;

            case 4:
            system("cls");
            Information_Of_A_Student();
            break;

            case 5:
            cout << "\n\t******** Thank you *******" << endl;
            exit(0);
            break;

            default:
            cerr << "\tYou press worng key..\n    Press any key between 1 to 4.. " << endl;
            break;

        }
        cout << "\n\tPress E for goto Main Menu\nOr Enter Any key for Student Account Menu" << endl;
        cin >> ch;
        system("cls");
    }
}

void StudentDB :: Database_Operator ()
 {
     cout << " ******** Welcome to Student Database Account ******* " << endl;
    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;

        cout << "\n\t\t-----Main Menu-----" << endl;
        cout << "\n\t  Press 1: Student" << endl;
        cout << "\t  Press 2: Admin" << endl;
        cout << "\t  Press 3: Stop the Program" << endl;

        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            cout << "\n\t*********** Student Menu***********" << endl;
            Student();
            break;

            case 2:
            system("cls");
            cout << "\n\t*********** Admin Menu***********" << endl;
            Admin();
            break;


            case 3:
            cout << "\n\t******** Thank you *******" << endl;
            exit(0);
            break;

            default:
            cerr << "\tYou press worng key..\n\t Press 1 or 2 " << endl;
            break;

        }
        cout << "\n\tEnter Any key for Confirm\n\t  Or Press N for Quit" << endl;
        cin >> ch;
        system("cls");
    }

}
