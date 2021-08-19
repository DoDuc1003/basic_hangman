#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "support.h"
using namespace std;
class Game
{
private:
	string word;
	string word_guess;
	int hp;
	bool run;
	vector <char> char_guessed;
public:
	Game();
	bool Get_run();
	string Get_word();
	void show_infor();
	void game_loop();
};