#include <iostream>
using namespace std;

class student{
private:
  long id;
  int age;
  string name;

public:
   void set_age(int a=0){ age=a;} 
   int get_age();
   void set_name(string="Yme");
    void print_name();
    void print_all();
};

void student::set_name(string n){
  name=n;
  
}
int student::get_age(){
  return age;
}
void student::print_name(){
  cout<<"Name:"<<name<<endl;
}
void student::print_all(){
  print_name();
   cout<<"age:"<<age<<endl;
}