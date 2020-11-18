#include <iostream>
#include <string>

using namespace std; 


void arrays (){
    const int ARRAY_SIZE = 10;
    int intArray[ARRAY_SIZE]={4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
    int targetValue = 12;
    int targetPos = 0;
    
    while((intArray[targetPos] != targetValue) && (targetPos < ARRAY_SIZE)){
        cout << targetPos++;
    }
}


void maxSearch(){
    const int ARRAY_SIZE = 10;
        int intArray[ARRAY_SIZE]={4, 5, 9, 12, -4, 0, -57, 30987, -287, 1};
        int highestValue = intArray[0];
        for (int i = 1; i < ARRAY_SIZE; i++){
            if (intArray[i] > highestValue){
                highestValue = intArray[i];
            }
        }
    cout << highestValue;
}

// qsort of stdl example function, DO NOT INITALIZE, GOTTA WORK ON HOW TO USE THIS
// void qsort (){
//     int compareFunc(const void voidA, const void voidB){
//         int intA = (int )(voidA);
//         int intB = (int )(voidB);
//         return intA - intB; 
//     }
// }
// 
// void qsortExample(){
//         int compareFunc(const void voidA, const void voidB){
//         }
//     
// const int ARRAY_SIZE = 10;
// int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
// qsort(intArray, ARRAY_SIZE, sizeof(int), compareFunc);
// }


void insertionSort (){ //Gotta play with this a bit too
    const int ARRAY_SIZE = 10;
    int intArray[ARRAY_SIZE] = {87, 28, 100, 78, 84, 98, 75, 70, 81, 68};
    int temp; 
    int start = 0; //Declare Start Variable of array 
    int end = ARRAY_SIZE - 1;  //Declare end variable of array 
        for(int i = start + 1; i<= end; i++) 
            //Selects next value to be inserted into sorted data set, the first value is always 'in order' so start with the first value + 1
        {
            for (int j = i; j > start && intArray[j-1] > intArray[j]; j--)
                //Repeatedly swaps the current value with predecessor until it reaches the current location within the data set, the loop starts with j at i, and decreases along the data set until it reaches the end of the array
            {
            int temp = intArray[j-1]; //Holds current value down one position in the array
            intArray[j-1] = intArray[j];//Swaps current value with value down one position in array
            intArray[j] = temp;//Swaps that position again with temp and resolves the loop
            cout << temp; //Outputs garbage memory when called... why? Maybe use pointers???
        }
    }
    
}

void averageStats() {
    const int ARRAY_SIZE = 11; 
    int gradeArray[ARRAY_SIZE] = {86, 76, 100, 97, 64, 83, 88, 92, 74, 95, 22}; //Grades Array with 10 values
    double sum = 0; //intalize sum as double (need decimal i.e. more memory)  
    for (int i = 0; i < ARRAY_SIZE; i++){ //Loop through array
        sum += gradeArray[i]; // Append and add each value within looped array
    }
    double average = sum / ARRAY_SIZE; //divide all values with the array size
    cout << average; //Prints out average of all values
}
    

void dataValdiation(){
    const int ARRAY_SIZE = 10;
    double vendorPayments[ARRAY_SIZE] = {12, 15, 22, -3, 54, 76, -100, 2, .3, -.8}; 
    int countNegative = 0; 
    for (int i = 0; i < ARRAY_SIZE; i++){
        if (vendorPayments[i] < 0) countNegative++;
        //cout << countNegative; //prints out number weirdly, maybe because through loop it outputs count for each iteration of array
        {
    }
  }
  cout << countNegative; //Correct, prints out count, assumed hypothesis was correct. 
}
  
int main(){
    //arrays();  
    //maxSearch(); 
    //compareFunc(); 
    //qsortExample();
    //insertionSort(); 
    //averageStats(); 
    //dataValdiation(); 
    
    std::string Enter;
    std::getline(cin, Enter);
    return 0;
}
