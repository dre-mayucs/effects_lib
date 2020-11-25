#include "DxLib.h"
#include "Object_OP.h"
#include <iostream>
#include "Color.h"

Object_OP::Object_OP(const int Min_X, const int Max_X, const int Min_Y, const int Max_Y, const int MaxSize)
{
	Obj_r = 1 + (rand() * ((MaxSize / 2) - 1 + 1) / (1 + RAND_MAX));
	pos_X = Min_X + (rand() * (Max_X - Min_X + 1) / (1 + RAND_MAX));
	pos_Y = Min_Y + (rand() * (Max_Y - Min_Y + 1) / (1 + RAND_MAX));
}

void Object_OP::Object_Draw()
{
	v += dt * gravity;
	pos_Y += v;

	DrawCircle(pos_X, pos_Y, Obj_r, WHITE, true);
}

void Object_OP::Get_Object_Pos(int *Pos_X, int *Pos_Y)
{
	*Pos_X = this->pos_X;
	*Pos_Y = this->pos_Y;
}
