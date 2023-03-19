#include<iostream>
using std::string;

class Employee{ //class

//Object - attributes
public://Access modifier
    string Name;
    string Company;
    int Age;
//Method - object behaviour
    void IntroduceYourSelf(){
        std::cout<<"Name - "<< Name <<std::endl;
        std::cout<<"Company - "<< Company <<std::endl;
        std::cout<<"Age - "<< Age <<std::endl;
     }
//Creating a constructor method
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }

};

int main(){

    Employee employee1 = Employee("Minindu","ATL Labs",24);
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Saldina","YT.CodeBeauty",25);
    employee2.IntroduceYourSelf();

    return 0;
}