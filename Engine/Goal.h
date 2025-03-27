#pragma once
#include "Board.h"

class Goal {
public:
	Goal();
	void Draw(Board& brd) const;
	void Respawn();
	Location GetLocation();
private:
	Location loc;
	static constexpr Color c = Colors::Red;
};