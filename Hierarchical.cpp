 #include <iostream>
using namespace std;

class student
{
public:
    int roll;
    char name[30];
};

class TestMarks : public student
{
public:
    int sub1, sub2, sub3, sub4, sub5;
};

class SportMarks : public student
{
public:
    int score;
};

class FinalResult : public TestMarks, public SportMarks
{
public:
    float per;

    void process_result()
    {
        cout << "\n.... Student Result ....\n";

        cout << "Enter roll no: ";
        cin >> TestMarks::roll;

        cout << "Enter student name: ";
        cin >> TestMarks::name;

        cout << "\nEnter marks in Subject 1: ";
        cin >> sub1;

        cout << "Enter marks in Subject 2: ";
        cin >> sub2;

        cout << "Enter marks in Subject 3: ";
        cin >> sub3;

        cout << "Enter marks in Subject 4: ";
        cin >> sub4;

        cout << "Enter marks in Subject 5: ";
        cin >> sub5;

        cout << "Enter sports score: ";
        cin >> score;

        per = ((sub1 + sub2 + sub3 + sub4 + sub5 + score) / 600.0) * 100;

        cout << "\n----- Student Details -----\n";
        cout << "Roll No: " << TestMarks::roll << endl;
        cout << "Student Name: " << TestMarks::name << endl;
        cout << "Percentage (including sports): " << per << "%" << endl;
    }
};

int main()
{
    FinalResult obj;

    obj.process_result();

    return 0;
}
