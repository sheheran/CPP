#include<iostream>
using std::string;

class Employee{

private:
    string Name;
    string Company;
    int Age;

public:
    //set method for name
    void setName(string name){
        Name = name;
    }
    //get method for name
    string GetName(){
        return Name;
    }

    //set method for company
    void setCompany(string company){
        Company = company;
    }
    //get method for company
    string GetCompany(){
        return Company;
    }

    //set method for age
    void setAge(int age){
        if(age >= 18)
        Age =  age;
    }
    //get method for age
    int GetAge(){
        return Age;
    }

    void IntroduceYourSelf(){
        std::cout<<"Name - "<< Name <<std::endl;
        std::cout<<"Company -"<< Company <<std::endl;
        std::cout<<"Age -"<< Age <<std::endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){

    Employee employee1 = Employee("Minindu", "ATL lab", 24);
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("Saldina","YT CodeBeauty", 25);
    employee2.IntroduceYourSelf();

    employee1.setAge(15);
    std::cout<<employee1.GetName() << " is "<<employee1.GetAge() << " years old. "<<std::endl;
    return 0;
}