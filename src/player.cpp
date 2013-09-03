#include "../include/player.hpp"
#include "../include/ConstValue.hpp"
#include <iostream>

#pragma warning(disable : 4996)

Player::Player::Player()
{
	this->setInfo();
}

void Player::Player::setInfo()
{
	this->setName();
}

void Player::Player::setName()
{
	char _name[MAX_NAME_LEN+1];
	std::cout << "Please enter your name (less than 15 characters):\n";
	std::cin >> _name;
	this->playerName = new char[std::strlen(_name)+1];
	std::strcpy(this->playerName, _name);
}

void Player::Player::getName()
{
	std::cout << "Hello, " << this->playerName << ".\n";
}