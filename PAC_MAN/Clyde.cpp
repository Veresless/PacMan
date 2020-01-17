#include "Clyde.h"
#include "Constants.h"

void Clyde::setStartPosition()
{
	point_ = getClydeStartPosition();
}
Clyde::Clyde()
{
	setStartPosition();
	retreatPoint_ = getClydeRetreatPoint();
}
void Clyde::setDirectionPoint(const POINT point, const Direction direction, const POINT blinky)
{
	const int count = getClydeDistanse();
	directionPoint_ = ((sqrt(distanse(point_, point)) >= count * size_) ? point : retreatPoint_);
}