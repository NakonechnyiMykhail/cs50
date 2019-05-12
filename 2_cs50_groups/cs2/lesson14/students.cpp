#include <iostream>
#include <cstring>
#include <cstdio>
#include "students.h"
using namespace std;

int main(void){
    //v1
    int enrollment = 0;
    cin >> enrollment;
    student students[enrollment];

    for (int i = 0; i < enrollment; i++) {
        cin >> students[i].name;
        cin >> students[i].age;
    }

    for (int i = 0; i < enrollment; i++) {
        cout << students[i].name << endl;
        cout << students[i].age << endl;
    }

    //v2
    // student walker = {"Walker", 19};
    // cout << walker.name << endl;
    // cout << walker.age << endl;

    // student ivan;
    // ivan.name = "Ivan";
    // ivan.age = 15;
    // cout << ivan.name << endl;
    // cout << ivan.age << endl;

    FILE *file = fopen("students.csv", "w");
    if (file) {
        for (int i = 0; i < enrollment; i++) {
            fprintf(file, "%s,%i\n", (students[i].name).c_str(), students[i].age);
        }
        fclose(file);
    }
    return 0;
}