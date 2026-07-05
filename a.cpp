#include <iostream>
using namespace std;
 class person{  
 	public:
string name;
 int age;
 	
 	person(string s,int a){
 	name = s;	
 	age = a;	
 		
 		
 		cout<<"Parent class constructer"<<endl;
 		
	 }
 	
 	void print(){
 	cout<<"The name of the person "<<name<<endl;	
 	cout<<"the age of the person "<<age<<endl;	
 		
 		cout<<"parent class method "<<endl;
	 }
 	
 	
 };
 class student : public person{ 
   public:
 
 	int marks;
 	
 	  
 	  student() : person("mehlail",12){
 	 marks = 45;
 	 
 	  	cout<<"child class constructer"<<endl;
 	  	
 	  }
	   
 	  
 	
 	
 		void print(){
 			    cout<<"The name of the person "<<name<<endl;	
 	             cout<<"the age of the person "<<age<<endl;	
 	         	cout<<"The marks of the student "<<marks<<endl;	
 	
 		
 		cout<<"child class method "<<endl;
}
 };
 
 int main(){
 	student a;
 	a.print();
 	
 	
 	
 	
 	return 0;
 }
 
 
 
 
 