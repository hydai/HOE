#include "../include/worker.hpp"
#include "../include/special_product.hpp"
#include <Windows.h>
#include <iostream>
void RenewConsole();

int main () {
	DWORD _StartTime = 0, _EndTime;
	int i = 0;
	std::cout << "�ثe�g�L "<< 0 << " ��" << std::endl;
	while(1) {
	
		_EndTime = GetTickCount();
		//do something
		
			
		if (_EndTime - _StartTime > 1000)
		{	
			i++;
			_StartTime = _EndTime;
			RenewConsole();
			std::cout << "�ثe�g�L "<< i << " ��" << std::endl;
		}
	}
	return 0;
}

void RenewConsole() {
	system("cls");

}