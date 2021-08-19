
#include "base.h"


using namespace std;

Game::Game()
{
	word = choose_word();
	word_guess = string(word.length(), '-');
	
	this->hp = 7;
	this->run = true;
}
void Game::game_loop()
{
	show_infor();
	while (run)
	{
		//show_infor();
		if (hp == 0)
		{
			print_file("gameover.txt");
			break;
		}
		if (word == word_guess)
		{
			print_file("win.txt");
			break;
		}
		clear_screen();
		SetColor(0, 9);
		heading();
		print_figure(hp);
		cout << "\t \t word you guess is ";
		cout << word_guess << endl;
		cout << "\t \t the char you guess : ";
		char c;
		cin >> c;
		if (check_char(word, c))
		{
			cout << "\t \t this char correct" << endl;
			word_guess = update_word(word, word_guess, c);
		}
		else
		{
			hp--;
			cout << "\t \t this char is incorrect" << endl;
		}
		cout << "\t \t your hp : " << hp << endl;
		delay(1000);
	}

}
bool Game::Get_run()
{
	return run;
}

string Game::Get_word()
{
	return word;
}
void Game::show_infor()
{
	cout << word << endl;
	delay(500);
	cout << word_guess << endl;
	delay(500);
	cout << hp << endl;
	/*for (int i = 0; i < char_guessed.size(); i++)
	{
		cout << char_guessed.at(i) << " ";
	}*/
	cout << endl;
}
