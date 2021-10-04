#include <iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter 1 for input in kg/m"<<endl;
    cout<<"Enter 2 for input in lbs/in"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    if(choice == 1){
        double height, weight;
        cout<<"Enter Weight in kg: ";
        cin>>weight;
        cout<<"Enter Height in m: ";
        cin>>height;
        double bmi = weight/(height * height);
        cout<<bmi<<endl;
        if(bmi<18.5){
            cout<<"underweight";
        }
        else if(bmi>=18.5 && bmi<=25){
            cout<<"normal";
        }
        else if(bmi>25 && bmi<30){
            cout<<"overweight";
        }
        else if(bmi>=30){
            cout<<"obese";
        }
    }
    else if(choice == 2){
        double height, weight;
        cout<<"Enter Weight in lbs.: ";
        cin>>weight;
        cout<<"Enter Height in in: ";
        cin>>height;
        double bmi = (weight * 703)/(height * height);
        cout<<bmi<<endl;
        if(bmi<18.5){
            cout<<"underweight";
        }
        else if(bmi>=18.5 && bmi<=25){
            cout<<"normal";
        }
        else if(bmi>25 && bmi<30){
            cout<<"overweight";
        }
        else if(bmi>=30){
            cout<<"obese";
        }
    }
    else{
        cout<<"Invalid Choice";
    }
}
