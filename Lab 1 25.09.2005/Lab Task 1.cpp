#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string email;
};

int main() {


    Student stud[2];

    for (int i = 0; i < 2; i++) {

        cout << " Student No." << i + 1 << " Name: ";
        cin.ignore(); // clear leftover newline from previous input
        getline(cin, stud[i].name);

        cout << " Student No." << i + 1 << " ID: ";
        cin >> stud[i].id;

        cout << " Student No." << i + 1 << " Email: ";
        cin >> stud[i].email;
        cout << endl;

    }

    for (int i = 0; i < 2; i++) {

        cout << '\n' << '\n'
            << " Student No." << i + 1 << " Name: " << stud[i].name << '\n'
            << " Student No." << i + 1 << " ID: " << stud[i].id << '\n'
            << " Student No." << i + 1 << " Email: " << stud[i].email;
    }

}
