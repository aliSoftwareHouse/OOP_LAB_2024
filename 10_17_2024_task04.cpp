#include <iostream>
using namespace std;

int area = 0;

class Rectangle {
private:
	double length;
	double width;
public:
	void setDimensions(double L, double W) {
	   length = L;
		width = W;
		if (L > 0 && W > 0) {
			L = 0;
			W = 0;
		}
		else {
			cout << "Invalide Dimensions\n";
		}
	}
	int getLength() {
		return length;
	}
	int getWidth() {
		return width;
	}

	int calculateArea() {
		area = length * width;
		return area;
	}

	int calculatePerimeter() {
		area = 2 * (length + width);
		return area;
	}
};

int main() {
	Rectangle rec;
	rec.setDimensions(5.0, 3.0);
	cout<<"Length of Rectangle "<< rec.getLength()<<endl;
	cout<<"Width of Rectangle "<< rec.getWidth()<<endl;
	cout<<"Rectangle Area "<< rec.calculateArea()<<endl;
	cout<<"Rectangle Perimeter "<< rec.calculatePerimeter()<<endl;
}
