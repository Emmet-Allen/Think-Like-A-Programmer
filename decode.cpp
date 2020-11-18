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
        number = number * 10 + (digit - '0');//convert the digit by the running number
         digit = cin.get();//Checks for blank spaces between digits
        
    }
    cout << "Number entered: " << number << '\n'; //Will output digit value as number int
}

void EOLConversion (){
    char digit;
    int number;
    
     cout << "Enter any digit number (include commas): "; 
    
    do{

        digit = cin.get();
        number = (digit - '0');
        digit = cin.get(); 
        
        while (digit != 10 &&  digit != 44){ //ASCII Code for EOL is 10 & for ',' is 44
            number = number * 10 + (digit - '0');
            digit = cin.get();
            }
            cout << "Number entered: " << number << '\n'; 
        }
    
    while(digit != 10); 
    
}

void bigLetter(){
    char character;
    int number; 
    
    cout << "Enter a number 1-26: ";
    cin >> number; 
    character = (number + 65 - 1); //Character Conversion: Number + ASCII Code for 'A'- 1 (to take into acount 1 index 
    cout << "Equivalent Uppercase Character: " << character << '\n';
    
}

void smallLetter(){
    char character; 
    int number;
    
    cout << "Enter a number 1-26: ";
    cin >> number; 
    character = (number + 97 - 1);
    cout << "Equivalent Lowercase Character: " << character << '\n';
}

void punctuation(){
    int number;
    char character;
    
    cout << "Enter a number between 1-8: ";
    cin >> number;
    switch (number){
        case 1: character = '!';
        break;
        case 2: character = '?';
        break;
        case 3: character = ',';
        break;
        case 4: character = '.';
        break;
        case 5: character = ' ';
        break;
        case 6: character = ';';
        break;
        case 7: character = '"';
        break;
        case 8: character = '\''; //Escape Character
        break;
    }
    cout << "Equivalent Symbol: " << character << '\n'; 
}

void trackingState(){
    enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
    int number; 
    
    modeType mode = UPPERCASE;
    cout << "Enter some numbers ending with -1: ";
    
    do{
        cin >> number;
        cout << "Number read: " << number;
        
        switch(mode) {
            case UPPERCASE: 
                number = number % 27;
                cout << ". Modulo 27: " << number << ".";
                if (number == 0){
                    cout << "Switch to LOWERCASE";
                }
                break;
                
            case LOWERCASE:
                number = number % 27;
                cout << ". Modulo 27: " << number << ".";
                if (number == 0){
                    cout << "Switch to PUNCTUATION";
                }
                break;
                
            case PUNCTUATION:
                number = number % 27;
                cout << ". Modulo 27: " << number << "."; 
                if (number == 0){
                    cout << "Switch to UPPERCASE";
                }
                break; 
                
        }
        cout << '\n';
    }
    
    while (number != -1); 
    
}
    
int main (){
    
    //digitConvert();
    //ThreeOrFourDigitConvert(); 
    //MultipleDigitConvert(); 
    //EOLConversion();
    //bigLetter();
    //smallLetter();
    //punctuation();
    //trackingState(); 
    string Enter;
    getline(cin, Enter);
    return 0; 
}
