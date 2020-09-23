#include <iostream>
#include <string> 

using namespace std; 

// Read character by character until we reach and end-of-line
// Convert a series of characters representing a number to an integer
// Convert an integer 1-26 into an uppercase letter (Use ASCII)
// Convert an interger 1-26 into a lowercase letter (Use ASCII)
// Convert an integer 1-8 into a punctuation symbol based on Table (Use ASCII)


void digitConvert (){
    char digit;
    int number;
    int convert;
    
    
    cout << "Enter a two digit number: ";
    digit = cin.get(); //Get first digit as Char
    number = (digit - '0') * 10; //Get tens place 
     
    digit = cin.get(); //Get second digit as Char
    
    number += (digit - '0'); //Get ones place and append it to tens to get digit as interger
    
    cout << "Interger number is: " << number << '\n'; 

}

void ThreeOrFourDigitConvert (){
    char digit;
    int number;
    
    
    cout << "Enter a three or four digit number: ";
    digit = cin.get(); //Get first digit as Char
   
    number = (digit - '0') * 100;//convert
    
    digit = cin.get(); //Get second digit
    
    number += (digit - '0') * 10; //convert 
     
    digit = cin.get(); //Get third digit
    
    number += (digit - '0'); //convert
    
    digit = cin.get(); //Get last digit
    
    if (digit == 10){ //checks if last digit is end of line digit
    cout << "Interger number is: " << number << '\n'; 
    }
    
    else{ //converts last digit by multiplying converted number by 10 and adding last digit conversion
        number = number * 10 + (digit - '0');
        cout << "Interger number is: " << number << '\n';
    }
}

void MultipleDigitConvert(){
    char digit;
    int number;
    
    cout << "Enter any digit number: ";
    
    digit = cin.get(); //Get First digit
    number = (digit - '0'); //convert

    digit = cin.get(); //Get second digit
    while (digit != 10){//while digit is not at the end of the line
        number = number * 10 + (digit - '0');//convert the digit 
         digit = cin.get();//Checks for blank spaces between digits
        
    }
    cout << "Number entered: " << number << '\n'; 
}



int main (){
    
    //digitConvert();
    //ThreeOrFourDigitConvert(); 
    MultipleDigitConvert(); 
    
    string Enter;
    getline(cin, Enter);
    return 0; 
}
