#include <iostream>
#include <string>
using namespace std;
//using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee: AbstractEmployee{
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

        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }

        void setAge(int age){
            if(age>=18){
            Age = age;
            }
        }
        int getAge(){
            return Age;
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
    void AskForPromotion(){
        if (Age>30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " No promotion for you!" << endl;
    }
};

int main(){
    Employee employee1 = Employee("Wingflo", "Amazon", 23);
    // employee1.introduceYourself();

    Employee employee2= Employee("Chris", "GitHub", 34);
    // employee2.introduceYourself();
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    // employee1.setAge(14);
    // cout << employee1.getName()<<" is "<< employee1.getAge()<<" years old"<< endl;

    return 0;
}