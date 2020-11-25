#pragma once
class Object_OP
{
private:
	const double gravity = 9.8;
	const double dt = 0.1;
	double t = 0;
	double v = 0;
	int pos_X;
	int pos_Y;
	int Obj_r;

public:
	Object_OP(const int Min_X, const int Max_X, const int Min_Y, const int Max_Y, const int MaxSize = 15);
	void Object_Draw();
	void Get_Object_Pos(int *Pos_X, int *Pos_Y);
};

