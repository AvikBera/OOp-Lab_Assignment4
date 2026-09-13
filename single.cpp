#include<iostream>
#include<string>
using namespace std;

class person{
    protected:
    string name;
    int age;
    public:
    void getData(){
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your age:"<<endl;
        cin>>age;
    }
    void displayData(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};   

class details : public person{
    protected:
    int roll;
    string course;
    public:
    void getData(){
        person::getData();         
        cout<<"Enter your Roll:"<<endl;
        cin>>roll;
        cout<<"Enter your Course:"<<endl;
        cin>>course;
    }
    void displayData(){
        person::displayData();      
        cout<<"Roll:"<<roll<<endl;      
        cout<<"Course:"<<course<<endl;  
    }
};   

int main(){
    details d;
    cout<<"--Enter student Details--"<<endl;
    d.getData();
    cout<<"--Display student Details--"<<endl;
    d.displayData();
    return 0;
}