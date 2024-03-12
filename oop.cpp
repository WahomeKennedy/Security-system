#include <iostream>
#include <string>
using namespace std;
//using std::string;

class Employee{
    private:
        string Name;
        string Company;
        int Age;
    public:
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
    void introduceYourself(){
        cout << "Name:- "<< Name << endl;
        cout << "Company:- "<< Company << endl;
        cout << "Age:- "<< Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Wingflo", "Amazon", 23);
    employee1.introduceYourself();

    Employee employee2= Employee("Chris", "GitHub", 28);
    employee2.introduceYourself();

    return 0;
}