#pragma once
#include <iostream>
#include <ctime>

class Effects
{
public:
	/// <summary>
	/// 振動関数
	/// </summary>
	/// <param name="common_pos">	共通移動座標</param>
	/// <param name="counter">		フレームカウンタ</param>
	/// <param name="move_value">	最大移動量</param>
	/// <param name="play_flag">	振動フラグ(自動off)</param>
	void Shake(int *common_pos, int *counter, const int move_value, bool *play_flag);

	/// <summary>
	/// イージング関数
	/// </summary>
	/// <param name="end_position">	移動距離</param>
	/// <param name="position">		最初の位置</param>
	/// <param name="time">			移動フレーム</param>
	/// <param name="now_time">		現在フレーム</param>
	/// <returns></returns>
	double Ease_In(double end_position, double position, double time, double now_time);
	double Ease_Out(double end_position, double position, double time, double now_time);
	double Ease_InOut(double end_position, double position, double time, double now_time);
};