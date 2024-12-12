#include <iostream>
using namespace std;

class math{
	private:
		int a , b;
		public:
		math(int a, int b):a(a),b(b){}
			friend int addnum(math object1,math object2);
			int  sum(int a, int b){
				return a+b;
			}
};

int addnum(math object1,math object2){
	math temp(0,0);
	temp.sum(temp.sum(object1.a, object2.a),temp.sum(object1.b, object2.b));
}

int main(){
	math obj1(70,80);
	math obj2(50,60);
	cout << "All Sum : "<<addnum(obj1,obj2);
}
