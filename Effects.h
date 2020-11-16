#pragma once
#include <iostream>
#include <ctime>

class Effects
{
public:
	/// <summary>
	/// �U���֐�
	/// </summary>
	/// <param name="common_pos">	���ʈړ����W</param>
	/// <param name="counter">		�t���[���J�E���^</param>
	/// <param name="move_value">	�ő�ړ���</param>
	/// <param name="play_flag">	�U���t���O(����off)</param>
	void Shake(int *common_pos, int *counter, const int move_value, bool *play_flag);

	/// <summary>
	/// �C�[�W���O�֐�
	/// </summary>
	/// <param name="end_position">	�ړ�����</param>
	/// <param name="position">		�ŏ��̈ʒu</param>
	/// <param name="time">			�ړ��t���[��</param>
	/// <param name="now_time">		���݃t���[��</param>
	/// <returns></returns>
	double Ease_In(double end_position, double position, double time, double now_time);
	double Ease_Out(double end_position, double position, double time, double now_time);
	double Ease_InOut(double end_position, double position, double time, double now_time);
};