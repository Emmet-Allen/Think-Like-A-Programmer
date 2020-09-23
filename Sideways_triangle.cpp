#include <iostream>
#include <string>



void SidewaysTriangle(){
 int row;
 int hashNumber;
 
 
    for(row = 1; row <= 7; row++){ //Loop the amount of Rows
        for(hashNumber = 1; hashNumber <= 4 - abs( 4 - row); hashNumber++){ //Then Loop the number of hash to 'empty' ratio. To do this, subtract half of the row's created by the absolute value of half of the rows minus the row value.  
             std::cout << "#";
        }
            std::cout << '\n';
    }
    
}







int main() {

    SidewaysTriangle();
    return 0;
    
}
