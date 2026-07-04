#include <iostream>
using namespace std;
//in inheritence we create two classes one will be the parent class and the other one which will inherit the parent class
//will be the child class 
class A{  //A is the parent class in this case
public:
	//Data members
	string name;
	int age;
	
	// Constructer
	A(){
		
	 name = "ALi";	
	age	= 34;
	
		
		
		cout<<"Parent class constructer"<<endl;
		//a point should be noted that when we create the object of the child class the first constructer that will be called is the above one(0 argument )which not just the parent constructer but also the defult constructer
		//of the parent class 
		
	}
	// Method

		
	
	
};
     //now child method
class B : public A{
	//Data members
	public :	
	string name;
	int age;
	string speciality;
	
	//Constructer
	
	B(){
	
	speciality = "paleantologist";
	cout<<"Child class constructer"<<endl;	
		
	}

		void print(){
		
	cout<<"The Name of the personale :"<<name<<endl;	
	cout<<"The Age of the personale :"<<age<<endl;	
	cout<<"The Speciality of the personale :"<<speciality<<endl;	
		
		cout<<"parent class method"<<endl;
		
}
	
	
};

int main(){
	
	//now we will create the object of the child class 
	B a;
	a.print();  
	
	
	
	
return 0;	
	
	
	
	
}



