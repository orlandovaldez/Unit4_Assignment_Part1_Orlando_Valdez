/*
Name: Orlando Valdez
Course Name Section: COSC-1436-57002
Tool: Repl.it
This is a program to accept user input and use the input to solve arithmetic problems and output display the results to the user
*/
#include <iostream> 
using namespace std;

int main()

{
  
    double numInput = 0.0; //accept user input for number
    char exit = '\0';
    double square = 0.0, quotient = 0.0, output1 = 0.0, output2 = 0.0;
    int counter =0;//initialize the counter for the loop

  do{
    
      cout << "Enter a number (-1 to exit): " << endl;
      while(!(cin >> numInput))//validate the input from the user to accept valid number
      {
        cout << "Must be a number: " << endl;
        cin.clear();
        cin.ignore(100, '\n');

        
      }
  counter++;
  if(numInput != -1)
  {
    // input from user is processed after succesfully validated
    square = numInput * numInput;
    quotient = numInput / numInput;
    output1 = ((numInput + 3) / 5);
    output2 = ((numInput + 3) / 5) + ((numInput + 7) / 2);

    //Output
    //results and calculatons are displayed to user
    
    cout << "Number times itslef is " << square << endl;
    cout << "Number divided by itself is " << quotient << endl;
    cout << "Output (n+3)/5 is: " << output1 << endl;
    cout << "Output [((n+3)/5)+((n+7)/2)] is: "<< output2 << endl;

    //counter results from loop counter are displayed
    cout << "\nThis program ran " << counter << " times!\n" << endl;
    
  }
  //
  }while(numInput != -1);// exit input from user and display message accordingly 
    {
      cout << "\nExiting Program..." << endl;
      cout << "\nSee Ya Later!" << endl;
    }

  
    




  return 0;
}