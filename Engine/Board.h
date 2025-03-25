#pragma once
#include "Location.h"
#include "Graphics.h"

class Board {
public:
	Board(Graphics& gfx);
	void DrawCell(Location loc, Color c);
private:
	int dimension = 20;
	int width = 10;
	int height = 10;
	Graphics& gfx;
};
