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

int main(){

    Employee employee1 = Employee("Minindu", "Atl lab", 24);
    Employee employee2 = Employee("Saldina","YT.CodeBeauty",25);

    employee1.AskforPromotion();
    employee2.AskforPromotion();

    return 0;
}