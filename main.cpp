//Anthony Muniz
//09/20
//CS 303

#include <iostream>
#include<fstream>
#include<sstream>
#include <string>
#include "header.h"
using namespace std;



int main(){
  
 ifstream fin("data.txt"); //Opens the file
  char choice;
  int size, index, datanum, num;
  int* arr;
  
cout << "How many numbers are in file? "; 
cin >> size;
arr = new (nothrow) int[size]; //Array is made based on size of the users input
  
while(fin.good()){            //Reads file and adds each integer until it reaches 
    for(int i=0;i<size;i++){  //end of file
      fin >> datanum;
      arr[i]=datanum;
    }
      }

bool x=true;
while(x){
  cout << endl;
 print_menu(); //prints the menu options for the user

cin >> choice;
cout << endl;
  switch(choice){ //switch statement continues to ask user until they exit from program
    case 'a': case 'A':
      cout << "What number would you like to check for? ";
      cin >> num;
      if(check_num(arr, num, size)== 0){
        cout << "The number was not found!"<< endl;
      }
      else{
        cout << "The number was found at index "<<check_num(arr,num,size)<< "."<< endl;
      }  //looks for number user is looking for
      cout << "The array looks as follows: "<< endl;
      for(int index=0;index<size;index++){  //prints array
      cout << arr[index] << " ";
    }
  
    break;
    
    case 'b': case 'B':
      cout << "What is the index of the number you would like to modify? ";
      cin >>index;
      cout << "What would you like the new number to be? ";
      cin >> num;
      cout<< "The number you modified was " << arr[index]<< ", it is now "<< modify_num(arr,num,index)<<"."<< endl;  //modifies number in array
      cout << "The array looks as follows: "<< endl;
      for(int index=0;index<size;index++){ //prints array
      cout << arr[index] << " ";
    }
  
    break;
    
    case 'c': case 'C':  
      cout << "What number would you like to add? ";
      cin >> num;
      cout << "The array now has " << num<< " added to it!"<< endl;
      add_num(arr, size, num);//adds space at end of array
      modify(arr,num,size-1); //modifies that space into the number the user wants
      cout << "The array looks as follows: "<< endl;
      for(int index=0;index<size;index++){
      cout << arr[index] << " ";
        }
      
    break;
    
    case 'd': case 'D':
      cout << "What index is the number would you liked to delete? ";
      cin >> index;
      cout << "The array is now missing " << arr[index]<< "!"<< endl;
      delete_num(arr,size, index);  //deletes number in array
      cout << "The array looks as follows: "<< endl;
      for(int index=0;index<size;index++){
      cout << arr[index] << " ";
    }

    break;
    
    case 'e': case 'E':
      cout << "See ya!" << endl;
      x=false;
    break;

    }
  
  }

     
  delete[] arr;

return 0;
}
