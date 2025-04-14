#include <iostream>
#include <map>
#include <chrono>

using namespace std;

int main(){
    /* 
    We create a table that holds all the values we need for 
    conversions. We will perform addition with these values to determine the 
    total numeric value of the given roman numeral.
    */
    map<char, int> valuesTable = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    
    // input will be declared as a string bc it will hold multiple chars
    string romanNumInput;
    /* 
    Output will be declared as int bc it holds the numeric value of the 
    roman numerals. It must be initialized at 0 so it does not hold junk 
    values as the variable does not get overwritten, only added to.
    */
    int translatedValueOutput = 0;
    // cin will be used here as roman numerals have no spaces.
    cin >> romanNumInput; 
    // start timer
    auto start = std::chrono::high_resolution_clock::now();
    /*
    We are checking if there are numeral pairs like "IV "or "XC" that don't follow
    normal addition rules. i is then incremented by 1 to skip the second numeral.
    */
    if (romanNumInput.size() == 1){
        translatedValueOutput = valuesTable[romanNumInput[0]];
        
    } else {
        for (int i=0; i<romanNumInput.size(); i++){
            if (romanNumInput[i] == 'I' && romanNumInput[i+1] == 'V'){
                translatedValueOutput += 4;
                i++;
            }
            else if (romanNumInput[i] == 'I' && romanNumInput[i+1] == 'X'){
                translatedValueOutput += 9;
                i++;
            }
            else if (romanNumInput[i] == 'X' && romanNumInput[i+1] == 'L'){
                translatedValueOutput += 40;
                i++;
            }
            else if (romanNumInput[i] == 'X' && romanNumInput[i+1] == 'C'){
                translatedValueOutput += 90;
                i++;
            }
            else if (romanNumInput[i] == 'C' && romanNumInput[i+1] == 'D'){
                translatedValueOutput += 400;
                i++;
            }
            else if (romanNumInput[i] == 'C' && romanNumInput[i+1] == 'M'){
                translatedValueOutput += 900;
                i++;
            }
            else {
                translatedValueOutput += valuesTable[romanNumInput[i]];
            } // bc this is at the end, it forces the program to run everything else,
            // which takes longer
        }
    }
    cout << translatedValueOutput;
    // end timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> diff = end - start;
    std::cout << "\nExecution time: " << diff.count() << " ms\n";
    return 0;
}