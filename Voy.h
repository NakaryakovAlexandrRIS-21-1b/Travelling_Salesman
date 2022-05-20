#pragma once
#include <iostream>
#include <vector>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
void mainRoad(int a, int b);
System::String^ result();
std::vector<std::vector<int>> matrix(int n);
std::vector<int> dj_(std::vector<std::vector<int>> a);
std::vector<std::vector<int>> stolb_reduct(std::vector<std::vector<int>> a, std::vector<int> b);
std::vector<std::vector<int>> str_reduct(std::vector<std::vector<int>> a, std::vector<int> b);
std::vector<int> di_(std::vector<std::vector<int>> a);
std::vector<std::vector<int>> new_line(int i, int j, int n, std::vector<std::vector<int>> a);
void print(std::vector<std::vector<int>> a);
bool still_while(std::vector<int> a, std::vector<int> b);
int price(std::vector<std::vector<int>> a, int b, int c);
int find(std::vector<int> a, int b);
std::vector<std::vector<int>> zero_count(std::vector<std::vector<int>> a);
std::vector<std::vector<int>> graph(std::vector<std::vector<int>> a);
std::vector<std::vector<int>> new_vertex(std::vector<std::vector<int>> was);
std::vector<std::vector<int>> del_vertex(std::vector<std::vector<int>> was);
void reduct(std::vector<std::vector<int>> a);
void clear_s();