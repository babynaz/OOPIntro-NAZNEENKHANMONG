#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;
  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){
    cout<<"What is your name?";
    cin>>n;
    a[i].set_name(n);
    cout<<"What is your age?";
    cin>>age;
    a[i].set_age(age);
  }
  
 
  //2. Print name and age of all N ppl
  for(i=0;i<N;i++){
    cout<<"Student "<<i+1<<endl;
    //a[i].print_name();
    //cout<<"age:"<<a[i].get_age()<<endl;
    a[i].print_all();
  //2.5 Create a print_all function to print all  
    
  }
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  int young=a[0].get_age();
  for(i=1;i<N;i++){
      if( <young) young= ; 
  }
  // Print all info for the yougest person
  cout<<"Youngest ppl:"<<endl;
  for(i=0;i<N;i++){
      //print info only the ppl with 'young' age
  }
  
  
  //4. Change input from cin to argv

  
 s1.set_name("Pun");  	s1.set_age(20); 
		s2.set_name("Joe");
		s2.set_age(17);
  
		
     s1.get_age()>s2.get_age() ?	s1.print_name() :
 	     s2.print_name();
 cout <<"is older";

   

    
  }
  
  


