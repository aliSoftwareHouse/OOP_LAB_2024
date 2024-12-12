#include <iostream>
using namespace std;

class math{
	private:
		int a ;
		public:
		math(int a):a(a){}
			friend int addnum(math object1,math object2);
};

int addnum(math object1,math object2){
	object1.a =object2.a + object1.a;
	return object1.a; 
}

int main(){
	math obj1(70);
	math obj2(50);
	cout << "a : "<<addnum(obj1,obj2);
}
