/*
��蕶
AtCoDeer�N�́A�ԁA�΁A�F�̃J�[�h�������Ă��܂��B
���ꂼ��̃J�[�h�ɂ� 1 �ȏ� 9 �ȉ��̐�����������Ă���A�ԐF�̃J�[�h�ɂ� r�A�ΐF�̃J�[�h�ɂ� g�A�F�̃J�[�h�ɂ� b ��������Ă��܂��B
3 �̃J�[�h�������珇�ɐԁA�΁A�F�̏��ɕ��ׁA�����琮����ǂ񂾂Ƃ��ɂ��ꂪ 4 �̔{���ł��邩���肵�Ȃ����B
*/

#include<iostream>

int main() {
	int r, g, b;
	std::cin >> r >> g >> b;

	std::cout << (((10*g + b) % 4==0 )? "YES" : "NO" )<< std::endl;

	return 0;
}