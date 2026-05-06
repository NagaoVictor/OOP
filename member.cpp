#include <iostream>
#include <string>
using namespace std;


class Id {
  public:
  std::string name;
  int age;
  
  void get_iden(); // Internal signature for outside function scope
   // cout << "The name is: " << name << ",\n The age is: " << age << "\n";
};


// Create the method of Id classe outside the Id class scope
void Id::get_iden(){
  cout << "The name is: " << name << ", The age is: " << age << "\n";
}


int main(){
  Id obj;
  obj.name = "Victor";
  obj.age = 29;
  obj.get_iden();


}
