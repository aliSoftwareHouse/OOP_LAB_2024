#include <iostream>
using namespace std;

class secondclass;

class firstclass{
	private: int a;
	public :
		firstclass(int a):a(a){}
		friend int addnum(firstclass obj, secondclass object);
};

class secondclass{
	private :
		int b;
		public:
		secondclass(int b):b(b){}
		friend int addnum(firstclass obj, secondclass object);
};

int addnum(firstclass obj , secondclass object){
	return obj.a + object.b; 
}
int main(){
	firstclass fc(50);
	secondclass sc(100);
	cout<<"Sum : "<< addnum(fc,sc);
}
