#include<iostream>
using namespace std;
class A{       // base class1
	public:
		int x;
		void input_x(){
			cout<<"enter a no=";
			cin>>x;
		}
};
class B{                 // base class2
	public:
	int y;
	void input_y(){
			cout<<"\nenter a no=";
			cin>>y;
		}
};
class C:public A,public B{    // derived class 
	public:
		void mul(){
			cout<<"\nmaltiply = "<<x*y<<endl;
		}
};

int main(){
	C obj;
	obj.input_x();
	obj.input_y();
	obj.mul();
}