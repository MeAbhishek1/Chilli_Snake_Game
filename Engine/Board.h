#pragma once
#include "Location.h"
#include "Graphics.h"

class Board {
public:
	Board(Graphics& gfx);
	void DrawCell(Location loc, Color c);
	void Draw_Border(int x, int y, Color c);
private:
	int dimension = 20;
	int width = 20;
	int height = 20;
	int outline_width = 3;
	Graphics& gfx;
};
