#include "functiondec.h"


void ReadFile(int array[150]){  // function def to read file and place numbers from file into array
  ifstream inFile;
  int i;
  inFile.open("input.txt");  //open file
  if (!inFile.is_open()) {  //if statement to output error if file does not open
    cout << "Unable to open file\n";
    return;
  }
  
  for(int i = 0; i < 100; i++)  //for loop to add 100 numbers from file to array
    inFile >> array[i];
  inFile.close(); 

  
}


int NumberCheck(int array[150]) {  //function to check if number exists in array 
  int numberCheck; 
  int indexVal;
  cout << "Enter number you want to check exists >> ";  //ask user the number they want to check for in array
  cin >> numberCheck;  
  for(int i = 0; i < 150; i++) {  //search array for user input
    if(numberCheck == array[i])
      return i;  //return index value
  }

  return -1;  
  
}


void ModifyArray(int array[150]) {  //function to modify a value in array given index val
  int indexVal;
  int newVal;
  int oldVal;
  cout << "Enter the index value of the number you want to modify >> ";  //ask user for index val 
  cin >> indexVal;
  cout << endl;
  cout << "Enter new value >> ";
  cin >> newVal;
  try {    //use a try and catch block to catch out of bounds error
    oldVal = array[indexVal];
    array[indexVal] = newVal;
    if(indexVal > 149) {  //if given index val is bigger than 150 then throw error
      throw std:: out_of_range("Error");
      }
     cout << "The new value at index " << indexVal << " is " <<  newVal << " the old value is " << oldVal << endl;  //else print old val and new val
      }
  catch(std::out_of_range) {
    cout << "Index Value is out of range " << endl;  //catch error and output error
    }
 
}

void AddNumber(int array[150]) {  //function to add to end of array
  int newNum;
  int indexVal = 100;
  cout << "Enter number you want to add to array >> ";  //ask user number val they want to add to array
  cin >> newNum;
  try {
    array[indexVal] = newNum;
    indexVal++;
    for(int i=0; i < 150; i++) {
      cout << array[i] << " ";
    }
    if(indexVal > 149) {  //if indexVal reaches 149 error is thrown 
      throw std:: out_of_range("Error");
      }
    }
  catch(std::out_of_range) {
    cout << "Index Value is out of range " << endl;  //catch error and output error message
    }
}  



void ReplaceArray(int array[150]) {  //function to replace array vals
  int indexVal;
  cout << "Enter the index value of the number you want to replace >> "; //ask user what 
  cin >> indexVal;  //
  array[indexVal] = 0;
  for(int i = 0; i < 150; i++) {
    cout << array[i] << " ";
    }
} 
