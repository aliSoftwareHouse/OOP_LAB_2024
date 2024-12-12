#include <iostream>
using namespace std;

class math{
	private:
		int a = 10;
		public:
			friend int addnum(math object);
};

int addnum(math object){
	object.a +=10;
	return object.a; 
}

int main(){
	math obj;
	cout << "a : "<<addnum(obj);
}
