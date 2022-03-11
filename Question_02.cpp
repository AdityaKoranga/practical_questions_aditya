#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f1;
    f1.open("Output.txt");
    for (int i = 0; i < 5; i++)
    {
        Student obj;
        cout << "Roll No     : ";
        cin >> obj.RollNo;
        f1 << "Roll No     : " << obj.RollNo << endl;

        cout << "Name        : ";
        cin.ignore();
        getline(cin, obj.Name);
        f1 << "Name        :" << obj.Name << endl;

        cout << "Class       : ";
        cin >> obj.Class;
        f1 << "Class       : " << obj.Class << endl;

        cout << "Year        : ";
        cin >> obj.Year;
        f1 << "Year        : " << obj.Year << endl;

        cout << "Total Marks : ";
        cin >> obj.TotalMarks;
        cout << endl
             << endl;

        f1 << "Total Marks : " << obj.TotalMarks << endl
           << endl;
    }
    f1.close();

    ifstream f2;
    f2.open("Output.txt");
    while (f2.good())
    {
        string str;
        getline(f2, str);
        cout << str << endl;
    }
    return 0;
}