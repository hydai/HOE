#include "../include/worker.hpp"
#include "../include/special_product.hpp"
#include <Windows.h>
#include <iostream>
#include "../include/player.hpp"
void RenewConsole();

int main () {
	DWORD _StartTime = 0, _EndTime;


	Player::Player testman;

	int i = 0;
	std::cout << "�ثe�g�L "<< i << " ��" << std::endl;
	while(1) {
	
		_EndTime = GetTickCount();
		//do something
		
			
		if (_EndTime - _StartTime > 1000)
		{	
			i++;
			_StartTime = _EndTime;
			RenewConsole();
			std::cout << "�ثe�g�L "<< i << " ��" << std::endl;
			testman.getName();
		}
	}
	return 0;
}

void RenewConsole() {
	system("cls");

}