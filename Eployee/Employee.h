#include <iostream>
using namespace std;

class Applicant{
    private:
        string Name;
        string JobTitle;
        string Degree;
        int YearsOfExpiremce;
        int Age;

    public: 
        //Name 
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
        //JobTitle
        void setJobTitle(string jobtitle){
            JobTitle = jobtitle;
        }
        string getJobTitle(){
            return JobTitle;
        }
        //Degree
        void setDegree(string degree){
            Degree = degree;
        }
        string getDegree(){
            return Degree;
        }
        //Expirence
        void setExpirence(int expirence){
            YearsOfExpiremce = expirence;
        }
        int getExpirence(){
            return YearsOfExpiremce;
        }
        //Age
        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }
            //Constructor
            Applicant(string name, string jobtitle, string degree, int expirence, int age){
                Name = name;
                JobTitle = jobtitle;
                Degree = degree;
                YearsOfExpiremce = expirence;
                Age = age;
            }
};

class OfferLetter{
    private:
        int BaseSalary;
        int SignOnBonus;
        int Stocks;
        int Incentives;

    public:
        //Base Salary
        void setSalary(int salary){
            BaseSalary = salary;
        }
        int getSalary(){
            return BaseSalary;
        }
        //Sign-On Bonus
        void setBonus(int bonus){
            SignOnBonus = bonus;
        }
        int getBonus(){
            return SignOnBonus;
        }
        //Stocks
        void setStocks(int stocks){
            Stocks = stocks;
        }
        int getStocks(){
            return Stocks;
        }
        //Incentives
        void setIncentives(int incentives){
            Incentives = incentives;
        }
        int getIncentives(){
            return Incentives;
        }
            //Constructor
            OfferLetter(int salary, int bonus, int stocks, int incentives){
                BaseSalary = salary;
                SignOnBonus = bonus;
                Stocks = stocks;
                Incentives = incentives;
            }
};

class SoftwareEngineer: public Applicant, public OfferLetter{
    public:
        string ProgrammingLanguage;
        string JobDescription;
        int BaseSalary;
        int SignOnBonus;
        int Stocks;

        SoftwareEngineer(string name, string company, int id, int age, string language, string jd, int salary,
        int bonus, int stocks)
            :Applicant(name, company, id, age)
        
        {
            ProgrammingLanguage = language;
            JobDescription = jd;
            BaseSalary = salary;
            SignOnBonus = bonus;
            Stocks = stocks;
        }

        void offerLetter(){
            cout << "Congratulations on being selected for our Software Enginner role at Boeing Inc. " << endl;
            cout << "Here is our Offer letter to you. Please respond within 2 to 3 buisness days " << endl;
            cout << "Job Description: " << JobDescription << endl;
            cout << "Base Salary: $" << BaseSalary << endl;
            cout << "Sign-On Bonus: $" << SignOnBonus << endl;
            cout << "Stocks: $" << Stocks << endl;
        }
};
