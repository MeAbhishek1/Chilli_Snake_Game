#include "Board.h"

Board::Board(Graphics& gfx) :
	gfx(gfx)
{

}

void Board::DrawCell(Location loc, Color c)
{
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}
