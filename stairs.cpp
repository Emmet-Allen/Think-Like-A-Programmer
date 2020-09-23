#include <iostream>
#include <string>

void stairs() {
    
int row;

  std::cout << "How many rows: ";
  std::cin >> row;
    
      for (int row = 1; row <= 5; row++){ //Loop for Rows of #
      for(int hashNum = 1; hashNum <= row; hashNum++){ //Loop for number of # on each row
    std::cout << "#";
      }
    std::cout << '\n';
    }
}

/*void halfSquare() {
    
int x;

    for(x = 1; x <= 5; x++){
        std::cout << 6 - x << std::endl; 
    }
}*/


int main() { 
 
    
 /* for (int row = 1; row <= 5; row++){ //Loop for Rows of #
      for(int hashNum = 1; hashNum <= row; hashNum++){ //Loop for number of # on each row
    std::cout << "#";
      }
    std::cout << '\n';
    }

*/
 
    stairs();
    //std::cout << '\n' << std::endl;
   // halfSquare();
    return 0;
 
}
