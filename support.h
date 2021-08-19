#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <string>
#include <algorithm>
#include <functional>
#include <list>
#include <queue>
#include <set>
#include <stack>
#include <random>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <Windows.h>
// #include <bits/stdc++.h>
using namespace std;
string choose_word();
bool check_char(string s, char c);
string update_word(string source_word, string guess_word, char c);
void print_figure(int hp);
void delay(int n); 
void clear_screen();
void SetColor(int background_color, int text_color);
void SetTittle();
void SetWindowSize(int width, int height);
void heading();
void print_file(string path);