#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int number;
    string name;

public:
    void setData(int num, const string& studentName) {
        number = num;
        name = studentName;
    }
};

class Exam {
protected:
    string subjectName;
    int minMarks;
    int maxMarks;
    int Marksobtained;

public:
    void setData(const string& subjName, int min, int max, int obtained) {
        subjectName = subjName;
        minMarks = min;
        maxMarks = max;
        Marksobtained = obtained;
    }
};

class Result : public Student, public Exam {
public:
    void displayResult() {
        cout << "Stu_Number: " << number << endl;
        cout << "Student Name: " << name << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Minimum Marks: " << minMarks << endl;
        cout << "Maximum Marks: " << maxMarks << endl;
        cout << "Total Marks obtained"<<Marksobtained<<endl;
    }
};

int main() {
    Result subj;

    subj.Student::setData(250,"Harpreet Kour");
        subj.Exam::setData("cpp",0,200,70);



    // Displaying result
    subj.displayResult();

    return 0;
}
