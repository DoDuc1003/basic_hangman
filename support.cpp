#include "support.h"
using namespace std;

const string FIGURE[] = {
        "\t \t   -------------    \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |                \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |           |    \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |          /|    \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |          /|\\  \n"
        "\t \t   |                \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |          /|\\  \n"
        "\t \t   |          /     \n"
        "\t \t   |     \n"
        "\t \t -----   \n",
        "\t \t   -------------    \n"
        "\t \t   |           |    \n"
        "\t \t   |           O    \n"
        "\t \t   |          /|\\  \n"
        "\t \t   |          / \\  \n"
        "\t \t   |     \n"
        "\t \t -----   \n"
};
string choose_word()
{
	ifstream file;
	file.open("word.txt");
	srand((int)time(0));
	int n = rand();
	n = n % 200 + 1;
	string word;
	for (int i = 0; i < n; i++)
	{
		getline(file, word);
	}
	file.close();
	return word;
}
bool check_char(string s, char c)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == c)	return true;
	}
	return false;
}
string update_word(string source_word, string guess_word, char c)
{
	for (int i = 0; i < source_word.length(); i++)
	{
		if (source_word[i] == c)	guess_word[i] = c;
	}
	return guess_word;
}
void print_figure(int hp)
{
    cout << FIGURE[7 - hp];
}
void delay(int n)
{
    this_thread::sleep_for(chrono::milliseconds(n));
}
void SetWindowSize(int width, int height)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;
    SetConsoleWindowInfo(hStdout, 1, &WindowSize);
}
void SetColor(int background_color, int text_color)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = background_color * 16 + text_color;
    SetConsoleTextAttribute(out, color);
    //system("color a");
}
/*
0 = Black		8 = Gray
1 = Blue		9 = Light Blue
2 = Green		10 = Light Green
3 = Aqua		11 = Light Aqua
4 = Red		12 = Light Red
5 = Purple	13 = Light Purple
6 = Yellow	14 = Light Yellow
7 = White		15 = Bright White
*/
void clear_screen()
{
    system("cls");
}
void SetTittle()
{
    SetConsoleTitle(TEXT("tittle is me"));
}
void heading()
{
    cout << "\t \t" << " ------------------------------ " << endl;
    cout << "\t \t" << " -----------HANG MAN----------- " << endl;
}
void print_file(string path)
{
    ifstream file;
    file.open(path);
    string line;
    while (!file.eof())
    {
        getline(file, line);
        delay(50);
        cout << line << endl;
    }
    file.close();
}