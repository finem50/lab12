#include <iostream>
#include <string>

using namespace std;

class Area{

public:
  float getArea();
  string getUnit();

private:
  string units;
  float area_value;
};

int main(){

  Area *ptrUnit = new Area;
  Area *ptrArea = new Area;

  cout << "The unit of measurement entered is: " << ptrUnit->getUnit() << endl;

  cout << "The area is: " << ptrArea->getArea() << endl;


  delete ptrArea;
  delete ptrUnit;

  return 0;
}

string Area::getUnit(){
  cout << "Enter the unit of measurement: \n";
  cin >> units;
  return units;
}

float Area::getArea(){
  cout << "Enter the area: \n";
  cin >> area_value;
  return area_value;

}
