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

class TotalCompensation{
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
            TotalCompensation(int salary, int bonus, int stocks, int incentives){
                BaseSalary = salary;
                SignOnBonus = bonus;
                Stocks = stocks;
                Incentives = incentives;
            }
};

class SoftwareEngineer{
    private:
        string ProgrammingLanguages;
        string JobDescription;
    public:
        void setProLang(string language){
            ProgrammingLanguages = language;
        }
        string getProLang(){
            return ProgrammingLanguages;
        }
        void setJob(string jd){
            JobDescription = jd;
        }
        string getJob(){
            return JobDescription;
        }
            SoftwareEngineer(string language, string jd){
                ProgrammingLanguages = language;
                JobDescription = jd;
            }
        
            void DisplaySoftwareEngineerRole(){
                cout << "---------Job Description--------" << endl;
                cout << "--------------------------------" << endl;
                cout << "Role: Software Engineer" << endl;
                cout << "Job Description: " << JobDescription << endl;
                cout << "Programming Languages Required: " << ProgrammingLanguages << endl;
          
            }
};

class OfferLetter: public Applicant, public TotalCompensation, public SoftwareEngineer{
    public:
        OfferLetter(string name, string jobtitle, string degree, int expirence, int age, int salary,
                     int bonus, int stocks, int incentives, string language, string jd)
                     
        :Applicant(name, jobtitle, degree, age),
         TotalCompensation(salary, bonus, stocks, incentives),
         SoftwareEngineer(language, jd)


        

};
