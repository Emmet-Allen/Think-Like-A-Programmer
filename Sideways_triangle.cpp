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

void Playbutton() {
int rows;
int hashNumber;

    for(rows = 1; rows <= 7; rows++){
        for(hashNumber = 0; hashNumber <= rows - 1; hashNumber++){
            std::cout << " " << "##" << " ";
        }
        std::cout << "#"; 
        std::cout << " " << '\n';
    }
    for(rows = 0; rows <= 5; rows++){
        for(hashNumber = 5; hashNumber > rows - 1; hashNumber--){
            std::cout << " " << "##" << " ";
        }
        std::cout << "#"; 
        std::cout << " " << '\n';
    }
}


int main() {

    //SidewaysTriangle();
    Playbutton();
    return 0;
    
}
