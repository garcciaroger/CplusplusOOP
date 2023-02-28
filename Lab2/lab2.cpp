#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//functions
void countLetters(char, int[]);
void MostLetters(int[]);
void leastLetters(int[]);

int main(){
    int letterCount[26] = {0};
    // Read the file
    ifstream infile("letter_count.txt");
    // Check if file exists
    if(!infile){
        cout << "File not found" << endl;
        return 0;
    }
    // Variables for program
    string completeFile;
    char StoreLetter;
    int counter[26] = {0};
    // Read the contents of the file
    while (getline(infile, completeFile)){
        for(int i = 0; i < completeFile.length(); i++){
            countLetters(completeFile[i], counter);
        }
    }
    //functions to find the most and least letters
    MostLetters(counter);
    leastLetters(counter);
    infile.close();
    return 0;
}

//This function counts the letters in the file
void countLetters(char letter, int counter[]){
    if(isalpha(letter))
    {
        letter = toupper(letter);
        counter[letter- 'A'] = counter[letter - 'A'] + 1;
    }
}

//This function gets the most letters
void MostLetters(int counter[]){
    int commom = counter[0];
    int commomStorer = 0;

    //Method to get most letters
    for(int i = 1; i < 26; i++)
    {
        if(counter[i] > commom){
            commom = counter[i];
            commomStorer = i;
        }
    }
    //display most letters
    char MostfinalCount = char('A' + commomStorer);
    cout << "Most common letter is " << MostfinalCount << " with " << commom << " occurrences" << endl;
}

//This function gets the least amount of letters
void leastLetters(int counter[]){
    int least = counter[0];
    int leastStorer = 0;

    //Method to get least letters
    for(int i = 1; i < 26; i++)
    {
        if(counter[i] < least){
            least = counter[i];
            leastStorer = i;
        }
    }

    //display least letters
    char LeastfinalCount = char('A' + leastStorer);
    cout << "Least common letter is " <<  LeastfinalCount << " with " << least << " occurrences" << endl;
}
