#include "shape.h"
#include "game.h"
#include "gameConfig.h"

shape::shape(game* r_pGame, point ref)
{
	RefPoint = ref;
	pGame = r_pGame;
	fillColor = config.fillColor;
	borderColor = config.penColor;
}

void shape::setRefPoint(point p)
{
	RefPoint = p;
}

point shape::getRefPoint() const
{
	return RefPoint;
}

double shape::getSize() const {
	return size;
}

void shape::Setcolor() {
	fillColor = RED;/*Wait to change fill color*/
}