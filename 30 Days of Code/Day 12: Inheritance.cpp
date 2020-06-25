#include <iostream>
#include <vector>
using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
        float sum=0.0;
		vector<int> testScores;  
	public:
        Student(string firstNameS, string lastNameS, int idS, vector<int> scores) : Person(firstNameS,lastNameS,idS)
       {
         this->testScores=scores;
       }
        char calculate()
        {
            for(int i=0;i<testScores.size();i++)
            {
                sum+=testScores[i];
            }
            sum/=testScores.size();
            if(sum<=100&&sum>=90)
                return 'O';
            else if(sum<90&&sum>=80)
                return 'E';
            else if(sum<80&&sum>=70)
                return 'A';
            else if(sum<70&&sum>=55)
                return 'P';
            else if(sum<55&&sum>=40)
                return 'D';
            else
                return 'T';    
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
