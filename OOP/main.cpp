#include<iostream>
using std::string;

class Employee{ //Creat a class and name it
// Members of this class are it's attributea and it's behaviours
//This class here act as a bluprint, a model for a employee
//Everything inside a class in C++ is private
public:   
   string Name;
   string Company;
   int Age;

void IntroduceYourself(){
    std::cout<<"Name - "<< Name <<std::endl;
    std::cout<<"Company - "<< Company <<std::endl;
    std::cout<<"Age - "<< Age <<std::endl;
}
};

int main(){

    Employee employee1; //employee1 is an object of classs employee
    //We have set properties for Age, Company and Name for employee1 object
    employee1.Name="Saldina";
    employee1.Company="YT.CodeBeauty";
    employee1.Age=25;
    //Describe a behaviour in the class, using class method
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Jhon";
    employee2.Company = "Amazon";
    employee2.Age = 35;
    employee2.IntroduceYourself();
}