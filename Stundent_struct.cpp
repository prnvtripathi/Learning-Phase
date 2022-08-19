#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    char ch,choice,disp;
    int i=0,c=0;
    cout<<"Do you want to\n1. Store details of students.\n2. Display the details of students."<<endl;
    cin>>ch;
    switch (ch)
    {
    case '1': 
        cout << "Enter information of students: " << endl;
        // storing information
        do{
            s[i].roll = i+1;
            cout << "For roll number : " << s[i].roll << endl;

            cout << "Enter name: ";
            cin >> s[i].name;

            cout << "Enter marks: ";
            cin >> s[i].marks;

            cout << endl;
            i++;
            c++;
            cout<<"Do you want to add one more entry ?(y/n)"<<endl;
            cin>>choice;
        }while(choice == 'y' || choice == 'Y');
        cout<<"Want to display all the students info ?(y/n)";
        cin>>disp;
        if(disp=='n' || disp=='N')
        {
            break;
        }
    case '2': 
        cout << "Displaying Information: " << endl;
        // Displaying information
        for(int i = 0; i < c; ++i)
            {
            cout << "\nRoll number: " << i+1 << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            }
        break;
    default: 
            cout<<"The page is in development please choose valid choices";
        }
    return 0;
}