#include"Student.h"

Student::Student(const std::string& name) : name(name){}

void Student::addGrade(double grade){
        grades.push_back(grade);
}

double Student::calculateAve()const{
    if(grades.empty()){
        return 0.0;
    }
    double ave=0.0;
    for(double i:grades){
            ave+=i;
    }
    return ave/grades.size();
}

double Student::getHighestGrade()const{
     if(grades.empty()){
        return 0.0;
    }
    double max=grades[0];
    for(double i:grades){
            if(grades[i]>max){
                max=grades[i];
            }
            return max;
    }

}

double Student::getLowestGrade()const{
     if(grades.empty()){
        return 0.0;
    }
    double min=grades[0];
    for(double i:grades){
            if(grades[i]<min){
                min=grades[i];
            }
            return min;
    }
}

std::string Student::getName(){
    return name;
}
std::vector<double> Student::getGrades(){
    return grades;
}
