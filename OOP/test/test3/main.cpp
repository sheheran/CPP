#include<iostream>
using namespace std;
using std::string;

void Print(void* ptr, char type){
    switch (type){
        case 'i' : cout<< "The Number is " <<*((int*)ptr)<<endl;
    break;
        case 'c' : cout<< "The Character is "<<*((char*)ptr)<<endl;
    break;
    }

}

void FinxMaxandMin(int NumbsersSet[], int size, int* max, int* min){
    *max = NumbsersSet[0];
    for(int i = 0; i < size; i++){
        if(NumbsersSet[i]> *max){
            *max = NumbsersSet[i];
        }
    }
    *min = NumbsersSet[0];
        for(int i = 0; i < size; i++){
        if(NumbsersSet[i]< *min){
            *min = NumbsersSet[i];
        }
    }

}

int main(){

    int num = 10;
    char Char = 'C';

    Print(&Char, 'c');

    int max;
    int min;
    int size = 5;
    int NumbersSet[size];

    for(int i = 0; i < size; i++){
        cout<<"Input Number "<< i+1 << " ";
        cin>>NumbersSet[i]; 
    }

    FinxMaxandMin(NumbersSet, size, &max, &min);

    cout<<"The maximum number is "<< max <<endl;
    cout<<"The minimum number is "<< min <<endl;


    return 0;
}