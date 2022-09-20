#include <iostream>
#include<fstream>
#include<sstream>
#include <string>
using namespace std;

int check_num(int* a,int num, int size);
int modify_num(int* a,int new_num, int index);
void modify(int* a,int new_num, int index);
void add_num(int* &a, int &size, int new_num);
void delete_num(int* &a, int &size, int index);
void print_menu();