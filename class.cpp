#include <iostream>
#include <string>

using namespace std;

class Parameters {
  public:
   std::string operator1;
   std::string operator2;
   std::string degree;
};


int main(int argc, char * argv[]){
  Parameters Param1;

  cout << "Enter the a parameter: ";
  cin >> Param1.operator1;
  cout << "Enter the b parameter: ";
  cin >> Param1.operator2;
  cout << "Enter the degree: ";
  cin >> Param1.degree;
  
  cout << "(" << Param1.operator1 << "+" << Param1.operator2 << ")^2\n";
}

