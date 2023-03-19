#include<iostream>
using std::string;

//Creting a abstract class also known as the contract
class AbstractEmployee {
//Make the function obligotori
   virtual void AskforPromotion() = 0;
};

class Employee: AbstractEmployee{ //The class has signed the contract
//Atributes of the object
    private:
        string Name;
        string Company;
        int Age;

    public:
//Object behaviour method
        void IntroduceYourSelf(){
            std::cout<<"Name - "<< Name <<std::endl;
            std::cout<<"Company - "<< Company <<std::endl;
            std::cout<<"Age"<< Age <<std::endl;
        }
//Constructor
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }
//Encapsulation to access privat objects
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
        Age = age;
    }
    int getAge(){
        return Age;
    }
    //Providing implimentation for the contract
    void AskforPromotion(){
        if (Age>30)
            std::cout<< Name << "got promted "<<std::endl;
        else
            std::cout<< Name << " sorry no promotion for you" << std::endl; 
    }

};
// sub class: parent class
class Developer: public Employee{ //Developer class inherit from the Employee class 
public:
    string FavProgramingLanguage;
//once you make a manual constructor in a previous class the default construction generation is turned off
//creating constructor for the developer sub class, there is a one property that is unique to developer sub class 
    Developer(string name, string company, int age, string favprograminglanguage)
        :Employee(name, company, age) //Sent these properties to the parent class
    {
        FavProgramingLanguage = favprograminglanguage;
    }
//Implimenting a method in developer class
    void FixBug(){
        std::cout<<getName() <<" Fixed bug using " << FavProgramingLanguage <<std::endl;
    }
    
};

int main(){
    //class object = constructor
    Employee employee1 = Employee("Minindu", "Atl lab", 24);
    Employee employee2 = Employee("Saldina","YT.CodeBeauty",25);

    Developer d = Developer("Salbina", "YT-CodeBeauty", 25, "C++");
    d.FixBug();

    return 0;
}