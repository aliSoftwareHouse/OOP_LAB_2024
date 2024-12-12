#include <iostream>
using namespace std;
class complex{
	public:
		int a, b;
		complex(int a, int b):a(a),b(b){}
		complex(){
			a = 0;
			b = 0;
		}
		complex operator *(complex object ){
			complex temp;
			temp.a = a * object.b;
			temp.b = b * object.a; 
			return temp;
		}
		void display(){
			cout<<"a :  "<<a<<endl;
			cout<<"b :  "<<b<<endl;
		}
};

int main(){
	complex object1(10,11);
	complex object2(12,13);
	complex object = object1 * object2;
	object.display();
}
