#include <iostream>
#include <vector> 
using namespace std;
class Vector{
	public:
	int size;
	int capacity;
	int* arr;
	Vector(){
		size =0;
		capacity= 1;
		arr = new int[1];
		
	}
	void add(int ele){
		if(size == capacity){                          //when size=capacity then size*2
			capacity*=2;
			int*arr2 = new int[capacity];
			for(int i =1;i<size;i++){
				arr2[i]=arr[i];
			}
			arr = arr2;
		}
		arr[size++] = ele;
	
	}
	void print(){
		for(int i =0;i<size;i++){
				cout<<arr[i]<<"    ";
			}
		cout<<endl;
		
	}
	int get(int idx){
		if(idx==0){
			cout<<"the array is empty"<<endl;
			return -1;
		}
		if(idx >=size || idx<0){
			cout<<"invalid index",,end;
				return -1;
		}
		
		return arr[idx];
	}
};
int main(){
Vector v;
v.add(12);
v.print();
cout<<v.size<<"  "<<v.capacity<<endl;
v.add(133);
v.print();
cout<<v.size<<"  "<<v.capacity<<endl;
v.add(1234);
v.print();
cout<<v.size<<"  "<<v.capacity<<endl;
v.add(13);
v.print();
cout<<v.size<<"  "<<v.capacity<<endl;
cout<<v.get(2);
return 0;	
}
