#include<iostream>

class Shape
{
	virtual void setX(int xcor) = 0; //const = 0;
	virtual int getX()  const = 0 ;//const = 0;
	virtual void setY(int ycor) = 0;//const = 0;
	virtual int getY() const= 0;//const= 0;
	virtual void draw() const=0;//const = 0;
};

class Circle: public Shape
{
	//Implement all pure virtual function from the base class
private:
	int x, y, radius;
public:
	Circle(int xcor, int ycor, int r){
		x = xcor;
		y = ycor;
		radius = r;
	}

	void setX(int xcor) {
		x = xcor;
	}
	void setY(int ycor) {
		y = ycor;
	}
	void setRadius(int r) {
		radius = r;
	}
	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}
	int getRadius() const{
		return radius;
	}
	void draw() const {
		std::cout << "drawing circle at: " << getX() << ", " <<
			getY() << " with radius of: " << getRadius() << std::endl;
	}
};

int main()
{
	Circle c(2, 3, 5);
	c.draw();
	return 0;
}
