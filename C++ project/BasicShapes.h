//Header file for Basic shapes in the game
#pragma once
#include "shape.h"

////////////////////////////////////////////////////  class Rect  ///////////////////////////////////////
//Rectanle class
/*							wdth
					---------------------
					|					|
			hght    |		 x			|     x is the reference point of the rectangle
					|					|
					--------------------
*/


class Rect:public shape
{
protected:
	int hght, wdth;	//height and width of the recangle
public:
	Rect(game* r_pGame, point ref, int r_hght, int r_wdth);
	virtual void draw() const;
	virtual void ResizeUp() ;
	virtual void ResizeDown();

	virtual void move(char step);
	virtual string MyType();

	void rotate(int angle);
	virtual void VerticalFlip();
	int gethght()const;
	int getwdth()const;
	~Rect();
	
	
};


////////////////////////////////////////////////////  class circle  ///////////////////////////////////////
//Reference point of the circle is its center
class circle :public shape
{
protected:
	//Add data memebrs for class circle
	int rad;
public:	
	circle(game* r_pGame, point ref, int r);	//add more parameters for the constructor if needed
	virtual void draw() const;
	virtual void ResizeUp();
	virtual void ResizeDown();
	virtual void move(char step);
	virtual string MyType();

	void rotate(int angle);
	int getrad()const;
	~circle();

};



// refrence point for the triangle at p1 the left down point
class Triangle : public shape
{
protected:
	int length, hight;
public:
	Triangle(game* r_pgame, int len, point ref);
	~Triangle();
	virtual void draw() const;
	virtual void ResizeUp();
	virtual void ResizeDown();
	virtual void move(char step);
	void rotate(int angle);
	virtual void VerticalFlip();
	int getlength()const;
	int gethight()const;
	virtual string MyType();
};
