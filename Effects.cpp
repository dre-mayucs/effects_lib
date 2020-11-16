#include "Effects.h"

void Effects::Shake(int *common_pos, int *counter, const int move_value, bool *play_flag)
{
	if (*play_flag == true) {
		if (*counter < 20) {
			*(common_pos + 0) = rand() % (move_value / (*counter + 1));
			*(common_pos + 1) = rand() % (move_value / (*counter + 1));
			*counter += 1;
		}
		else {
			*counter = 0;
			*(common_pos + 0) = 0;
			*(common_pos + 1) = 0;

			*play_flag = false;
		}
	}
}

double Effects::Ease_In(double end_position, double position, double time, double now_time)
{
	now_time /= time;
	return end_position * now_time * now_time + position;
}

double Effects::Ease_Out(double end_position, double position, double time, double now_time)
{
	now_time /= time;
	return -(end_position)*now_time * (now_time - 2) + position;
}

double Effects::Ease_InOut(double end_position, double position, double time, double now_time)
{
	now_time /= time / 2;
	if (now_time < 1) {
		return end_position / 2 * now_time * now_time + position;
	}
	return -(end_position) / 2 * ((--now_time) * (now_time - 2) - 1) + position;
}
