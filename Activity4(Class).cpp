#include <iostream>
using namespace std;

class Student {
  private:
    int roll_no;
    string name;
    string subject_names[3];
    int max_marks[3];
    int min_marks[3];
    int obtain_marks[3];

  public:
    void set_data() {
      cout << "Enter roll number: ";
      cin >> roll_no;
      cout << "Enter name: ";
      cin >> name;
      for (int i = 0; i < 3; i++) {
        cout << "Enter name of subject " << i+1 << ": ";
        cin >> subject_names[i];
        cout << "Enter maximum marks for " << subject_names[i] << ": ";
        cin >> max_marks[i];
        cout << "Enter minimum marks for " << subject_names[i] << ": ";
        cin >> min_marks[i];
        cout << "Enter obtained marks for " << subject_names[i] << ": ";
        cin >> obtain_marks[i];
      }
    }

    void display_result() {
      cout << "Roll No: " << roll_no << endl;
      cout << "Name: " << name << endl;
      for (int i = 0; i < 3; i++) {
        cout << subject_names[i] << " - ";
        cout << "Maximum Marks: " << max_marks[i] << ", ";
        cout << "Minimum Marks: " << min_marks[i] << ", ";
        cout << "Obtained Marks: " << obtain_marks[i] << endl;
      }
      float percentage = ((float)(obtain_marks[0]+obtain_marks[1]+obtain_marks[2]) / (float)(max_marks[0]+max_marks[1]+max_marks[2])) * 100;
      cout << "Percentage: " << percentage << "%" << endl << endl;
    }
};

int main() {
  Student students[4];

  for (int i = 0; i < 4; i++) {
    cout << "Enter details of student " << i+1 << ":" << endl;
    students[i].set_data();
  }

  cout << endl << "Results of all students:" << endl << endl;
  for (int i = 0; i < 4; i++) {
    students[i].display_result();
  }

  return 0;
}
