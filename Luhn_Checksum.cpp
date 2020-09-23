#include <iostream>
#include <string>

/* Luhn Checksum Validation
 * 
 * - Using orignal number, double the value of every OTHER digit
 * 
 * - Add values of individual digits together, 
 * if doubled value has two digits: ADD THE DIGITS INDIVIDUALLY
 * 
 * - The checksum digit will THEN BE ADDED to the total sum
 * 
 * - ID number is valid if the (original number + check sum) % 10 = 0;
 * 
 */

int checkDigit(int digit){

  int doubledDigit = digit * 2; //Doubles the Digit
  int sum;
   
    if(doubledDigit >= 10){ //Checks if the doubled digit is >= 10
        sum = 1 + doubledDigit % 10; //Outputs the remainder of 1 + doubled digit / 10
    }
    else{
        sum = doubledDigit; //Outputs the Doubled Digit
    }
    return sum;
  }

void ASCIIcheck (){
    char digit;
    std::cout << "Enter a one-digit number: ";
    std::cin >> digit; 
    int sum = digit - '0'; //Converts 'char' digit to 'int' digit
    std::cout << "Is the sum of digits " << sum << "? \n"; //Outputs ASCII digit
}

void checkValidate() { // Need to be able to convert int to ASCII 
  char digit; 
  int position = 1;
  int checksum = 0;  

  
    
    std::cout << "Enter a six-digit number: ";
    
    
    digit = std::cin.get(); //'get' method doesn't ignore white space 
    while (digit != 10){//Using while loop for infinite input validation{
    
//       if(position % 2 == 0){
//           checksum += digit - '0';
//       }
//       else{
//           checksum += doubleDigitValue
    
      if(position % 2 == 0){
      checksum += digit - '0';
      }
      else{
          checksum += 2 * (digit - '0'); 
      }
      digit = std::cin.get();
      position++; 
    } //Logic using postion set to 0
    
    
    std::cout << "Checksum is " << checksum << ".\n";
    
    if(checksum % 10 == 0){
        std::cout << "Checksum is divisible by 10. Valid. \n";
    }
    else{
        std::cout << "Checksum is not divisible by 10. Invalid. \n";
    }
    
}

void InputCheck (){
    char digit;
    
    std::cout << "Enter a number: ";
    while (true){
        digit = std::cin.get();
        std::cout << int(digit) << " ";
    }
}
    
void PositiveOrNegative(){
    int number;
    int positiveCount = 0;
    int negativeCount = 0;
    char response;
    
    std::cout << "Please enter 10 numbers:" ;
   
    
    for(int i = 0; i <= 9; i++){
         std::cin >> number;
    if (number < 0){ negativeCount++; }
    else if(number >= 0){ positiveCount++; }
    }
    
    std::cout << "Do you want the (p)ositive or (n)egative count?";
    std::cin >> response;
    if(response == 'p'){
        std::cout << "The positive count is: " << positiveCount << '\n';
      }
    else if(response == 'n'){
        std::cout << "The negative count is: " << negativeCount << '\n';
    }
}
    
void Luhn_CheckSum(){
    char digit;
    int checksum;
    int oddLengthChecksum = 0;
    int evenLengthChecksum = 0;
    int position = 1;
    
    std::cout << "Enter a number: ";
    
    digit =std::cin.get();
    
    while(digit != 10){
        if(position % 2 == 0){
            oddLengthChecksum += 2 * (digit - '0');
            evenLengthChecksum += digit - '0';
        }
        else{
            evenLengthChecksum += 2 * (digit - '0');
            oddLengthChecksum += digit - '0';
        }
    digit = std::cin.get();
    position++;
    }
    
    if((position - 1) % 2 == 0){ //Checks if position of last number is even.
        checksum = evenLengthChecksum;
        }
    else{
        checksum = oddLengthChecksum;
    }
    
    std::cout << "Checksum is: " << checksum << '\n';
    
    if(checksum % 10 == 0){
        std::cout << "Checksum is divisible by 10. Valid! " << checksum << '\n';
    }
    else{
        std::cout << "Checksum is not divisible by 10. Invalid. Try Again." << checksum << '\n';
    }
}
    
    
int main(){
    
    //checkDigit(8);
    //ASCIIcheck(); 
    //checkValidate();
    //InputCheck();
    //PositiveOrNegative();
    
    Luhn_CheckSum();
    
    std::string Enter;
    std::getline(std::cin, Enter);
    return 0;
}
