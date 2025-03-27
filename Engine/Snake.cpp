#include "Snake.h"

Snake::Snake(Location& loc)
{
	segments[0].InitHead(loc);

}

void Snake::MoveBy(Location& delta_loc)
{
	for (int i = current_size - 1; i > 0; i--) {
		segments[i].Follow(segments[i - 1]);
	}
	segments[0].MoveHeadBy(delta_loc);
}

void Snake::Grow()
{
	segments[current_size].InitBody();
	++current_size;

}

void Snake::Draw(Board& brd)
{
	for (int i = 0; i < current_size; i++) {
 		segments[i].Draw(brd);
	}
}

bool Snake::IsInTile(Location& in_loc)
{
	if (segments[0].GetLocation().x == in_loc.x &&
		segments[0].GetLocation().y == in_loc.y) {
		return true;
	}
	return false;
}

bool Snake::nextIsInTile(Location& in_loc)
{

	for (int i = 1; i < current_size; i++) {
		if (segments[0].GetLocation().x + in_loc.x == segments[i].GetLocation().x &&
			segments[0].GetLocation().y + in_loc.y == segments[i].GetLocation().y) {
			return true;
		}
	}
	return false;
}

void Snake::Segment::InitHead(const Location& in_loc)
{
	loc = in_loc;
	c = headColor;
}

void Snake::Segment::InitBody()
{
	c = bodyColor;
}

void Snake::Segment::Follow(const Segment& delta_seg)
{
	loc = delta_seg.loc;
}

void Snake::Segment::MoveHeadBy(const Location& delta_loc)
{
	loc.x = loc.x + delta_loc.x;
	loc.y = loc.y + delta_loc.y;
}

void Snake::Segment::Draw(Board& brd)
{
	brd.DrawCell(loc, c);
}

Location Snake::Segment::GetLocation() 
{
	return loc;
}
