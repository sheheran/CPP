#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
using std::string; //Making a set of characters in to an object in class


//Creating an abstrcat class for more complex functions



class Sensors{

private:

/*
To describe each sensor 1-byte (8-bits) were used 
*/

//Number of Sensors and ther addreses
    unsigned char Componenet_ID;
    int Num_ID;
//Sub Module Number
    string Sub_Module;
//Type of Sensor
    char Sensor_Type;
//Type Number
    int Num;

public:

    //Set methods to access the private variables - Has INput Arguments but no return types.
    //Set method for Sub Module - To input data from outside to private variable
    void Set_Sub_Moduel(string sub_module){
        Sub_Module = sub_module; 
    }
    //Set method for Componenet ID - To input data form outside to private variables
    void Set_Componenet_ID(unsigned char componenet_id){
        Componenet_ID = componenet_id;
        Num_ID = componenet_id;
    }


    //Get methods to private varuables - Has no input arguments but has return types
    unsigned char Get_Componenet_ID(){
        return printf("%X",Componenet_ID);
    }
    //Get method for Component ID - To out-put componenet ID data
    int Get_Num_ID(){
        return Num_ID;
    }
    //Get method for Sub Moules - To out-put Sub module name
    string Get_Sub_Module(){
        return Sub_Module;
    }

    //Constructor - Has the same name as the class, with no return type
    Sensors(unsigned char componenet_id, string sub_module){
        
        Componenet_ID = componenet_id;
        Sub_Module = sub_module;
        Num_ID = componenet_id;

    }

    //Information output method
    void sensor_info(){
        cout<<"Componenet Number : "<<Num_ID<<endl;
        printf("Componenet ID : %X",Componenet_ID);
        cout<<"Sub-Module Name : "<<Sub_Module<<endl;

    }



};


int main()
{

    Sensors sensor1 = Sensors(0xFF,"Current Sensor");
    sensor1.sensor_info();

    Sensors sensor2 = Sensors(0xA,"TOF");
    sensor2.sensor_info();

    sensor2.Set_Componenet_ID(0xD);
    sensor2.Set_Sub_Moduel("IR");

    cout<<"New sensor number : "<<sensor2.Get_Num_ID()<<" Sensor Hex num : "<<sensor2.Get_Componenet_ID()<<" Sensor Name : "<<sensor2.Get_Sub_Module()<<endl;

    return 0;
}