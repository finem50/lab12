#include <iostream>
#include <string>

using namespace std;

class Student{
public:
  void stuInfo();
  string prntStu();

private:
  string student_name;
  string student_idnumber;
};

int main(){

  int SIZE;
  cout << "How many students are there in the class?" << endl;
  cin >> SIZE;

  Student *stuList = new Student[SIZE];
  Student student;

  for(int i = 0; i < SIZE; i++){
    cout << "For student " << i+1 << ": " << endl;
    stuList[i].stuInfo();
  }

  cout << endl;
  cout << endl;

  for(int i = 0; i < SIZE; i++){
    cout << stuList[i].prntStu() << endl;
  }

  delete[] stuList;
  return 0;
}

void Student::stuInfo(){

  cout << "Enter the name of the student: " << endl;
  cin >> student_name;
  cout << "Enter the ID of the student: " << endl;
  cin >> student_idnumber;
}

string Student::prntStu(){

  string info = "Name: " + student_name + " | ID: " + student_idnumber;
  return info;
}
