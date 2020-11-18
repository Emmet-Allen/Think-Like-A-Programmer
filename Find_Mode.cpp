#include <iostream>
#include <string>

using namespace std; 



int main (){

  const int ARRAY_SIZE = 12;
  int surveyData[ARRAY_SIZE] = {4, 7, 7, 9, 9, 9, 8, 3, 3, 3, 3, 10};
  int currentFrequency = 0; 
  int highestFrequency = 0;
  int mostFrequent;
  
        for (int i = 0; i < ARRAY_SIZE; i++){
            currentFrequency++;
            
            //if (surveyData[i] IS LAST OCCURENCE OF A VALUE)
            if(i == ARRAY_SIZE - 1 || surveyData[i] != surveyData[i + 1]) {
            
            if (currentFrequency > highestFrequency){
                highestFrequency = currentFrequency;
                mostFrequent = surveyData[i];
            }
        currentFrequency = 0; 
        cout << mostFrequent << endl;
            }
        }
    
    
    
    return 0;
}
