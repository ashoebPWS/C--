#include <iostream>
#include "student.h"


int main() {
    // Create Student objects
    Student student1("Alice");
    Student student2("Bob");

    // Add grades for students
    student1.addGrade(85.0);
    student1.addGrade(92.5);

    student2.addGrade(1.1);
    student2.addGrade(88.5);
    student2.addGrade(95.0);

    // Display student information and statistics
    std::cout << student1.getName() << "'s Grades: ";
    for (double grade : student1.getGrades()) {
        std::cout << grade << " ";
    }
    std::cout << student2.getName() << "'s Grades: ";
    for (double grade : student2.getGrades()) {
        std::cout << grade << " ";
    }
    double x=student2.getHighestGrade();
    std::cout<<x<<std::endl;
   
    return 0;
}
