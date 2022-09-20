
#include <iostream>
#include<fstream>
#include<sstream>
#include <string>
#include "header.h"
using namespace std;


int check_num(int* a,int num, int size){
for(int i=0;i<size;i++){  //goes through array 
  if(num == a[i]){       //if number in array matches, return the index
    return i;
  }

}
  return 0;
  }

int modify_num(int* a,int new_num, int index){
  return a[index]=new_num;  //modifies number in array to whatever number you want
                           //and returns it
}

void modify(int* a,int new_num, int index){
  a[index]=new_num;  //modifies number in array to whatever number you want
  }

void add_num(int* &a, int &size, int new_num){
  size=size+1;  //adds 0 to end of the array
  a[size]=new_num;
  }

void delete_num(int* &a, int &size, int index){
  for(int i=index;i<=size;i++){  //goes through array
            a[i]=a[i+1];        //deletes selected num
        }
  size= size-1; 
        a[size]={}; //size is modified to get rid of the space
  }

void print_menu(){
  cout <<endl<< "Choose an option"<< endl;
cout << " a) Check if integer exists"<< endl;
cout << " b) Change the value of an integer"<< endl;
cout << " c) Add an integer" << endl;
cout << " d) Remove integer" << endl;
cout << " e) Exit" << endl;
}