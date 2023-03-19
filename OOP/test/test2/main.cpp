#include<iostream>
using namespace std;
using std::string;

//Making abstract class for complex functions
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

//Main class
class Employee : AbstractEmployee{ //signs the contract with the main class

protected:
    string Name;
    string Company;

private: 
//main class attributes

    int Age;

public:
    int RefNo;
// To modify the private variables 
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
// Behaviour method
void IntroduceYourSelf(){
    cout<< "My name is "<< Name << endl;
    cout<< "Company is "<< Company<< endl;
    cout<< "Age " << Age << endl;
    cout<< "Referance Number is "<<RefNo<<endl;
}
// Constructor of the Class
Employee(string name, string company, int age, int refno){
    Name = name;
    Company = company;
    Age = age;
    RefNo = refno;
}
//Implimentation for the abstract class method
void AskForPromotion(){
    if (RefNo > 20){
        cout<< Name << " is promoted."<<endl;
    }else if(((RefNo < 20) && (RefNo > 10))){
        cout<< Name << " is not promoted."<<endl;
    }
}

};

class Developer: public Employee{

public: 
    string FavProgrammingLanguage;

//Constructor of the child class
    Developer(string name, string company, int age, int refno, string favprogramminglanguage)
        :Employee(name, company, age, refno) //pass parent class parameters from child class
        {
            FavProgrammingLanguage = favprogramminglanguage;
        }
    
//Impliment behaviour method for developer class
    void FixBug(){
        cout<< getName() << " is fixing bugs using " << FavProgrammingLanguage <<endl;
    }
};

class Teacher:public Employee{
public:
    string FavSubject;
//Sub class constructor
    Teacher(string name, string company, int age, int refno, string favsubject)
        :Employee(name, company, age, refno)
    {
        FavSubject = favsubject;
    }
//Sub class behaviour method
    void PrepareLesson(){
        cout<< Name << " is preparing lesson " << FavSubject <<endl;
    }


};

int main(){
  /*  
    Employee employee1 = Employee("Minindu", "AtlLab", 24, 12);
    employee1.IntroduceYourSelf();
    employee1.RefNo = 12;
    employee1.IntroduceYourSelf();
    cout<< "The Company that I work in is "<< employee1.getCompany() <<endl;
    employee1.AskForPromotion();

    cout<<endl;

    Employee employee2 = Employee("Salbina", "YT-Codebeauty", 25, 14);
    employee2.IntroduceYourSelf();
    employee2.setAge(26);
    employee2.IntroduceYourSelf();
    cout << "The company that I work in is "<< employee2.getCompany() <<endl;
    employee2.RefNo = 21;
    employee2.AskForPromotion();

    cout<<endl;

    Developer d = Developer("Adam", "WSO2", 27, 25, "Python");
    d.FixBug();
    d.setCompany("Virtusa");
    d.IntroduceYourSelf();
    d.AskForPromotion();
*/
    Teacher t = Teacher("Jhon", "Cool school", 26, 23, "History");
    t.PrepareLesson();
    t.IntroduceYourSelf();
    t.AskForPromotion();
    return 0;

}