#include <iostream>
#include <fstream>
#include <string>
#include <list>

#define _WIN32_WINNT 0x0601
#include "Game.h"

const bool Menu()
{
	bool infitity = true;
	bool rezult = true;
	while (true == infitity)
	{
		std::cout << "To Start Game press Enter\nTo Schore List press Tab\nTo Exit Game press Esc";
		bool smallInfitity = true;
		while (true == smallInfitity)
		{
			if (0 != (GetKeyState(getEscKey()) & getBinaryToBool()))
			{
				infitity = false;
				smallInfitity = false;
				rezult = false;
			}
			if (0 != (GetKeyState(getTabKey()) & getBinaryToBool()))
			{
				system("cls");
				std::cout << "Press 'Esc' to back in menu.\n";
				std::ifstream in(getPath());
				std::string line;
				if (true == in.is_open())
				{
					while (getline(in, line))
					{
						std::cout << line << '\n';
					}
				}
				in.close();
				while (0 == (GetKeyState(getEscKey()) & getBinaryToBool()));
				Sleep(getDelay());
				system("cls");
				std::cout << "To Start Game press Enter\nTo Schore List press Tab\nTo Exit Game press Esc";
			}
			if (0 != (GetKeyState(getEnterKey()) & getBinaryToBool()))
			{
				infitity = false;
				smallInfitity = false;
				rezult = true;
			}
		}
	}
	return rezult;
}

int main()
{
	
	CONSOLE_FONT_INFOEX fontInfo;
	fontInfo.cbSize = sizeof(fontInfo);
	const HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(handle, false, &fontInfo);
	fontInfo.dwFontSize.X = getFontSizeX();
	fontInfo.dwFontSize.Y = getFontSizeY();
	SetCurrentConsoleFontEx(handle, false, &fontInfo);
	std::string fontSize = "mode con lines=" + std::to_string(getVertical() * getSize() / getFontSizeY()) +
		" cols=" + std::to_string(getHorizontal() * getSize() / getFontSizeX());
	system(fontSize.c_str());
	
	if (true == Menu())
	{
		bool infitity = true;
		while (true == infitity)
		{
			system("cls");
			std::string name;
			std::cout << "Enter your name:";
			std::cin >> name;
			Game game;
			const int schore = game.run();
			std::ofstream out(getPath(), std::ios::app);
			if (true == out.is_open())
			{
				out << name << ":" << schore << '\n';
			}
			out.close();
			system("cls");
			std::cout << "Game Over!\nYour Schore:" << schore << "\nPress 'Esc' to back in menu";
			while (0 == (GetKeyState(getEscKey()) & getBinaryToBool()));
			system("cls");
			Sleep(getDelay());
			infitity = Menu();
		}
		
	}
	return 0;
}
