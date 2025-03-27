#include "Goal.h"
#include <random>

Goal::Goal()
{
	Respawn();
}

void Goal::Draw(Board& brd) const
{
	brd.DrawCell(loc, c);
}

void Goal::Respawn()
{
	std::random_device rd;
	std::mt19937 rng(rd());
	std::uniform_int_distribution <int> x_dist(1, 30);
	std::uniform_int_distribution <int> y_dist(1, 20);
	loc.x = x_dist(rng);
	loc.y = y_dist(rng);


}

Location Goal::GetLocation()
{
	return loc;
}
