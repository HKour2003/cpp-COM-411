#include <iostream>
#include <string>
using namespace std;

struct Name {
    string firstName;
    string lastName;
};

void bubbleSort(Name arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].lastName > arr[j+1].lastName) {
                // swap arr[j] and arr[j+1]
                Name temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    Name names[n]; // array of n Name structures

    // read the names from keyboard
    for (int i = 0; i < n; i++) {
        cout << "Enter the first name of person " << i+1 << ": ";
        cin >> names[i].firstName;
        cout << "Enter the last name of person " << i+1 << ": ";
        cin >> names[i].lastName;
    }

    // sort the names using bubble sort algorithm
    bubbleSort(names, n);

    // print the sorted names
    cout << "Sorted names:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i].firstName << " " << names[i].lastName << endl;
    }

    return 0;
}
