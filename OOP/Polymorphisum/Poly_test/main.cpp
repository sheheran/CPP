 #include <iostream>
 #include <string>

 using namespace std;
 using std::string;

//Considering where a complex function has to be executed
class AbstractEmployee {
//Make the function obligotory
virtual void AskforPromotion() = 0;
};

//Declering class
class Employee : AbstractEmployee { //Signing the contract with the abstract class 
    private:
        string Company;
        int Age;
    public:
        string Name;
//Declearing a method
    void IntroduceYourSelf(){
        cout<<"Name - "<< Name <<endl;
        cout<<"Company - "<< Company <<endl;
        cout<<"Age - "<< Age <<endl;
    }
//Declearing another method
void Work(){
    cout<<Name<<" is checking email, task backlog, performing tasks..."<<endl;
}
//Declearing constructor, Have the same name of the class and have no return type
    Employee(string name, string company, int age){
        Name  = name;
        Company = company;
        Age = age;
    }
//Company and Age details are private and encapsulated to assign use get and set methods
void setCompany(string company){
    Company = company;
}
void setAge(int age){
    Age = age;
}
void setName(string name){
    Name = name;
}
string getCompany(){
    return Company;
}
int getAge(){
    return Age;
}
string getName(){
    return Name;
}
//Implimentation for the contract
void AskforPromotion(){
    if(Age > 24)
        cout<< Name << " got promoted." <<endl;
    else if (Age < 24){
        cout<< Name << " is not promoted."<<endl;
    }
}
};

//Declearing sub function of employee class called the deveoper
class Developer: public Employee{ //considering the public access modifire of main employee class
//So every thing public can be used by the sub class
public:
    string FavProgramingLanguage;
//Creating a constructor for the sub class
Developer (string name, string company, int age, string favprogramminglanguage):
    Employee(name, company, age) {//Sending the properties to the parent class
    FavProgramingLanguage = favprogramminglanguage;
}
//Implimenting method to the sub class to fix bug
void FixBug(){
    cout << getName() <<" Fix bug using "<< FavProgramingLanguage<< endl;
}
//Declearing another method
virtual void Work(){
    cout<<Name<<" is writing "<< FavProgramingLanguage<< " code" <<endl;
}
};

class Teacher: public Employee{
public:
    string Subject;
//Method
    void prepareLesson(){
        cout<<Name<<"is preapring lesson about" << Subject <<endl;
    } 
//Constructor
Teacher(string name, string company, int age, string subject):
    Employee(name, company, age){
        Subject = subject;
    }
//Declearing another method
virtual void Work(){
    cout<<Name<<" is teaching "<< Subject <<endl;
}
};

 int main(){

    //class object = constructor
    Employee employee1 = Employee("Minindu", "Atl-Lab", 25);
    Employee employee2 = Employee("Salbina", "Code-beauty", 18);
    //employee1.IntroduceYourSelf();
    //cout<<endl;
    //employee2.IntroduceYourSelf();
    //cout<<endl;
    employee1.setName("Ashly");
    employee1.setAge(18);
    employee1.setCompany("WS02");
    //employee1.AskforPromotion();
    //cout<<endl;
    //employee2.AskforPromotion();
    //We need to create a new developer
    Developer d = Developer("Salbeena","Code-beauty",27,"C++");
    Teacher t = Teacher("Mj","M-TV", 28, "Song");
    //d.FixBug();
    //t.prepareLesson();
    //cout<<endl;
    //d.IntroduceYourSelf();
    //d.AskforPromotion();
    //t.IntroduceYourSelf();
    //t.AskforPromotion();
    employee1.Work();

//Instead of a dot to access memeners of a class using pointers 
    //Creating an employee pointer
    Employee* e1 = &d; //Pointer of an employee class can hold the referance to a member of a sub class
    Employee* e2 = &t;

    e1->Work();
    e2->Work();

    return 0;
 }