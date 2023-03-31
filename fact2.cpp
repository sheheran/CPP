//The Factory Method Pattern provides a generalized way to create instances of an object and can be a great way to hide implementation
//details for derived class
//Factory method is a creational design pattern that provides an interface for creating objects in a supperclass but allows the sub-classes to alter the types
//of memebers that will be created. 


#include <iostream>
#include <string>
//using smart pointers
#include <memory>
using namespace std;


class IGameObject{
    public:

        virtual ~IGameObject(){} //Virtual distructor
        //Making a function obligotori menaing making the function compulsory
        virtual void Update() = 0; 
        //Any class that we derive from must again impliment these two member functions
        virtual void Render() = 0;
};

//Sub-class / Derived class form IGameObject parent class inherit from the parent class
class Plane : public IGameObject{
    public:
        Plane(){}
        void Update() {}
        void Render() {}
};

class Boat : public IGameObject{
    public:
        Boat(){}
        void Update() {}
        void Render() {}
};

//Creating enum classes for our objects
enum class ObjectType {PLANE, BOAT};


//IGameObject* MakeGameObjectFactory(std::string type){
//IGameObject* MakeGameObjectFactory(ObjectType type){
//Instead of returning a row pointer returning a standard shared pointer

std::shared_ptr<IGameObject> MakeGameObjectFactory(ObjectType type){
    if(ObjectType::PLANE==type){
        return std::make_shared<Plane>();
    }else if(ObjectType::BOAT==type){
        return std::make_shared<Boat>();
    }
    return nullptr;
}

int main(){
//Purpose of the factory mehtod is for us to avoid having to make decisions about
//Which objects we're creating in out code. If it is a Plane it should recognize it is a plane
//or Boat and so on 
    //Boat b;
    //Plane p;
//insted of this 
    std::shared_ptr<IGameObject> myObject = MakeGameObjectFactory(ObjectType::PLANE);
    std::shared_ptr<IGameObject> myObject1 = MakeGameObjectFactory(ObjectType::BOAT);

    //delete myObject;
    //delete myObject1;
    return 0;
}
