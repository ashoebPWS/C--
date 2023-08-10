#pragma once
#include<string>
#include<vector>
class Student 
{
public:
    Student(const std::string& name);
    void addGrade(double grade);
    double calculateAve() const;
    double getHighestGrade() const;
    double getLowestGrade() const;

    std::string getName() ;
    std::vector<double> getGrades() ;


private:
   std::string name; 
   std::vector<double> grades;

};

