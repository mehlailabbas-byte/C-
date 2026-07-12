#include <iostream>
using namespace std;
class a{
	public:
	string name;
	int age;
	
	a(){
		
		name = "mehalil";
			age = 23;
		cout<<"parent constructer is called "<<endl;
		
		
	}
virtual	void print(){
	cout<<name<<endl;	
			cout<<age<<endl;	
			cout<<"Parent meathod is called "<<endl;
	}
};
class b : public a{
	
	public :
		string name;
		b(){
			
			
			cout<<"child constructer is called "<<endl;
		}
		
		void print(){
	cout<<name<<endl;	
			cout<<age<<endl;	
			cout<<"child meathod is called "<<endl;
	}
	
};
int main(){
	
	a *ptr;
	b s;
	ptr = &s;
	ptr->print();
	
	return 0;
}
