#include<iostream>
using std::string;

class Employee{

private:
//attributes
    string Name;
    string Company;
    int Age;

public: 
//method
    void IntroduceYourSelf(){
        std::cout<<"Name - "<< Name << std::endl;
        std::cout<<"Company - "<<Company <<std::endl;
        std::cout<<"Age - " <<Age <<std::endl; 
    }
//construct
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
//get-set method
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age  = age;
    }

    int getAge(){
        return Age;
    }
};

int main(){

    Employee employee1 = Employee("Minindu", "ATLlab",24);
    employee1.IntroduceYourSelf();

    employee1.setAge(25);
    std::cout<<"Name of Employee is "<< employee1.getName() << " age is "<< employee1.getAge()<< std::endl;

    employee1.setName("Sheheran");
    employee1.setCompany("Gislaved");
    employee1.IntroduceYourSelf();
    
    return 0;
}