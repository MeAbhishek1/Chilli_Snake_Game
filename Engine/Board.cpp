#include "Board.h"

Board::Board(Graphics& gfx) :
	gfx(gfx)
{

}

void Board::DrawCell(Location loc, Color c)
{
	gfx.DrawRectWithPad(loc.x * dimension, loc.y * dimension, dimension, dimension,2, c);
}

void Board::Draw_Border(int x, int y, Color c)
{
	//Draw top border
	gfx.DrawRectDim(x, y, width*dimension, outline_width, c);

	//Draw left border
	gfx.DrawRectDim(x, y, outline_width, height*dimension, c);

	//Draw right border
	gfx.DrawRectDim(x+width*dimension - outline_width, y, outline_width, height*dimension, c);

	//Draw bottom border
	gfx.DrawRectDim(x, y + height*dimension - outline_width, width*dimension, outline_width, c);

}
