#include <algorithm>
#include <ctime>

#include "Gost.h"
#include "Blinky.h"
#include "Pinky.h"
#include "Inky.h"
#include "Clyde.h"

Gost::Gost(COLORREF mainColor, COLORREF fearColor, const POINT& retreatPoint) :
	DinamicSprite(SpriteType::GOST, mainColor, SPRITE_GOST), fearColor_(fearColor), retreatPoint_(retreatPoint), fear_(false) {}
const int Gost::distanse(const POINT& position, const POINT& directionPoint)
{
	return (position.x - directionPoint.x) * (position.x - directionPoint.x) + (position.y - directionPoint.y) * (position.y - directionPoint.y);
}
const POINT Gost::getPoint(const Direction direction) const
{
	POINT point = point_;
	switch (direction)
	{
	case UP:
		{
		point.y -= size_;
		break;
	}
	case RIGHT:
	{ 
		point.x += size_;
		break;
	}
	case DOWN:
	{
		point.y += size_;
		break;
	}
	case LEFT:
	{ 
		point.x -= size_;
		break;
	}
	default:
	{
		break;
	}
	}
	return point;
}
void Gost::setMode(GostMode mode)
{
	if (mode == GostMode::FEAR) direction_ = (Direction)(((int)direction_ + getDirectionCount() / 2) % getDirectionCount()); // Reverse direction
	mode_ = mode;
}
void Gost::setFear(const bool fear)
{
	fear_ = fear;
}
void Gost::updateSample()
{
	initializeSample(SPRITE_GOST);
}
std::shared_ptr<Gost> Gost::createGost(const GostType type)
{
	std::shared_ptr<Gost> gost = nullptr;
	switch (type)
	{
	case BLINKY:
	{
		gost = std::shared_ptr<Gost>(new Blinky());
		break;
	}
	case PINKY:
	{
		gost = std::shared_ptr<Gost>(new Pinky());
		break;
	}
	case INKY:
	{
		gost = std::shared_ptr<Gost>(new Inky());
		break;
	}
	case CLYDE:
	{
		gost = std::shared_ptr<Gost>(new Clyde());
		break;
	}
	default:
		break;
	}
	return gost;
}
void Gost::initializeSample(const bool sample[])
{
	for (int i = 0; i < size_; i++)
	{
		for (int j = 0; j < size_; j++)
		{
			sample_[i][j] = ((true == sample[i * size_ + j]) ? ((false == fear_)? mainColor_ : fearColor_) : backgroundColor_);
		}
	}
}
void Gost::decision(const std::vector<Direction> & directions, const POINT& directionPoint)
{
	std::vector<Direction> indexes;
	indexes.push_back(directions.back());
	int length = distanse(getPoint(indexes[0]), directionPoint);
	for (Direction element : directions)
	{
		if (element != indexes[0])
		{
			int newDistanse = distanse(getPoint(element), directionPoint);
			if (newDistanse < length)
			{
				length = newDistanse;
				indexes.clear();
				indexes.push_back(element);
			}
			else if (newDistanse == length)
			{
				indexes.push_back(element);
			}
		}
	}
	if (indexes.size() == 1) direction_ = indexes[0];
	else
	{
		std::sort(indexes.begin(), indexes.end());
		direction_ = indexes[0];
	}
}
void Gost::choiseDirection(bool ways[4])
{
	ways[((int)direction_ + getDirectionCount()/2) % getDirectionCount()] = false; 
	std::vector<Direction> directions;
	for (int i = 0; i < getDirectionCount(); i++)
	{
		if (ways[i])
		{
			directions.push_back((Direction)i);
		}
	}
	if (1 == directions.size())
	{
		direction_ = directions[0];
	}
	else
	{
		switch (mode_)
		{
		case GostMode::ATTACK:
		{
			decision(directions, directionPoint_);
			return;
		}
		case GostMode::FEAR:
		{
			std::srand(time(0));
			direction_ = directions[rand() % directions.size()];
			return;
		}
		case GostMode::RETREAT:
		{
			decision(directions, retreatPoint_);
			return;
		}
		}
	}
}
void Gost::setReadyPosition()
{
	point_ = getCastReadyPosition();
	direction_ = LEFT;
}
