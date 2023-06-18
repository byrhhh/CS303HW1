#include "functiondec.h"



int main() {
  
  //declarations
  int array[150]; ////create array with 150 spaces
  int indexValue;
  
  

  for(int i = 0; i < 150; i++){ //create for loop to fill array with 0s
    array[i] = 0;
  } 
  
  ReadFile(array);  //call read file function
  
  for(int i = 0; i < 150; i++) //print new array
    cout << array[i] << " "; 

  

  indexValue = NumberCheck(array);  //call NumberCheck function 
  if(indexValue == -1)  //output message based on return of function
    cout << "Number was not found" << endl;
  else
    cout << "Number was found at index value " << indexValue << endl;


  ModifyArray(array);  //call modify function
  AddNumber(array);  //call addNumber function
  ReplaceArray(array);  //call replaceArray function
  

  
  





  
}
