#include <iostream>
using namespace std;

class mathematic {
public:
	int a,b;
	mathematic(int a, int b):a(a),b(b) {}
	mathematic() {
		a = 0;
		b = 0;
	}
	mathematic operator+(mathematic o) {
		mathematic object(0,0);
		object.a = a + o.a;
		object.b = b + o.b;
		return object;
	}
	void display() {
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};

int main() {
	mathematic o1(3, 4);
	mathematic o2(5, 6);
	mathematic o3 = o1 + o2;
	o3.display();
}
