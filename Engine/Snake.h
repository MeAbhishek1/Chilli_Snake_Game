#pragma once
#include "Board.h"

class Snake {
public:
	Snake(Location& loc);
	void MoveBy(Location& delta_loc);
	void Grow();
	void Draw(Board& brd);
	bool IsInTile(Location& in_loc);
	bool nextIsInTile(Location& in_loc);
private:
	class Segment {

	public:
		void InitHead(const Location& in_loc);
		void InitBody();
		void Follow(const Segment& delta_seg);
		void MoveHeadBy(const Location& delta_loc);
		void Draw(Board& brd);
		Location GetLocation();
	private:
		Location loc;
		Color c;

	};
private:
	static constexpr Color headColor = Colors::Yellow;
	static constexpr Color bodyColor = Colors::Green;
	static constexpr int snake_max_size = 100;
	Segment segments[snake_max_size];
	int current_size = 1;

};