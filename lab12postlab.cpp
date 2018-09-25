#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student{

public:
  void getData();
  string displayData();
  ~Student();

private:
  long stuIDNum;
  string stuName;
};

int main(){

  int n, index;
  int SIZE;
  cout << "How many students are there in the class?" << endl;
  cin >> SIZE;

  Student *stuList = new Student[SIZE];

  for(int i = 0; i < SIZE; i++){
    cout << "For student " << i << ": " << endl;
    stuList[i].getData();
  }

   cout << endl;

   cout << "Which action would you like to do?" << endl;
   cout << "1) Display entire database." << endl;
   cout << "2) Display requested student record." << endl;
   cout << "3) Delete a student record." << endl;
   cout << "4) Modify a student record." << endl;
   cin >> n;

   switch(n){

      case 1: //Case to display entire database
        for(int i = 0; i < SIZE; i++){
          cout << stuList[i].displayData() << endl;
        }
        break;

      case 2: //Case to display requested student record
        cout << "Enter the index of the student to display: " << endl;
        cin >> index;
        cout << stuList[index].displayData() << endl;
        break;

      case 3: //Case to delete a student record
        cout << "Enter the index of the record to delete: " << endl;
        cin >> index;
        for(int i = index; i < SIZE; i++){
          stuList[i] = stuList[i + 1];
          }
        cout << "\nAfter removal... " << endl;
        for(int i = 0; i < SIZE; i++){
          cout << stuList[i].displayData() << endl;
          }
        break;

      case 4: //Case to modify a student record
        cout << "Enter the index of the record to be modified: " << endl;
        cin >> index;
        stuList[index].getData();
        cout << "\nAfter modifying... " << endl;
        for(int i = 0; i < SIZE; i++){
          cout << stuList[i].displayData() << endl;
        }
        break;

      default:
        cout << "incorrect input." << endl;
        break;
   }

  delete[] stuList;
  return 0;
}

void Student::getData(){

  cout << "Enter the name of the student: " << endl;
  cin >> stuName;
  cout << "Enter the ID of the student: " << endl;
  cin >> stuIDNum;
}

string Student::displayData(){
  std::string number;
  std::stringstream strstream;
  strstream << stuIDNum;
  strstream >> number;

  string info = "Name: " + stuName + " | ID: " + number;
  return info;
}

Student::~Student(){

}
