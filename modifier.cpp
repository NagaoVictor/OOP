#include <iostream>
#include <string>

using namespace std;


class Id {
  public:
    std::string name;
    int age;
    int get_id(void);
    void set_id(int nid);
    
  private:
    int id;
};


int Id::get_id(void){
  return id;
}

void Id::set_id(int nid){
  id = nid;
}


int main(){
  Id obj;
  int id;
  
  obj.name = "Victor";
  obj.age = 29;
  
  cout << "Enter some id: "; 
  cin >> id;
  
  obj.set_id((long)id);
  cout << "Name: " << obj.name << ", Age: " << obj.age << ", Id: " << id << "\n"; 

  return 0;
}

