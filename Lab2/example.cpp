// Header file is used for input & Output stream
#include <iostream>
// Header file is used for file handling functions
#include <fstream>
// Header file is used for C++ string class
#include <string>

using namespace std;

// Function used to count number of occurances of
// each alphabet in a file content
// A reference of letter and an array is passed as a arguments
void count(char &letter, int letterCount[])
    {
    // If letter is a alphabet
    if(isalpha(letter))
    {
    // Convert letter into uppercase letter
    letter = toupper(letter);
    // Increase the count of letter by 1
    letterCount[letter - 'A'] = letterCount[letter - 'A'] + 1;
    }
    }

    // Function used to find most common and least common
    // alphabet in a file
    // The letterCount array is passed as a argument
void findMostLeast(int letterCount[])
{
// Variable used to store occurances of most common letter
// Intially assume 0th index letter to most common
    int countMostCom = letterCount[0];

    // Variable used to store location of most common letter
    int locMostCom = 0;

// Variable used to store occurances of least common letter
// Intially assume 0th index letter to least common
int countLeastCom = letterCount[0];

// Variable used to store location of most common letter
int locLeastCom = 0;

// Loop counter
int i;

    // Each number of count in an array
    for(i = 1; i < 26; i++)
    {
    // If current count is greater than the value of countMostCom
    if(letterCount[i] > countMostCom)
    {
    // Replace the value of countMostCom with current count
    countMostCom = letterCount[i];
    // Replace the location with current value of i
    locMostCom = i;
    }

// If current count is less than the value of countLeastCom
if(letterCount[i] < countLeastCom)
{
// Replace the value of countLeastCom with current count
countLeastCom = letterCount[i];
// Replace the location with current value of i
locLeastCom = i;
}
}

    // Find the letter with most common occurances
    // Add locMostCom with character 'A'
    char mostCom = char('A' + locMostCom);

// Find the letter with least common occurances
// Add locMostCom with character 'A'
char leastCom = char('A' + locLeastCom);

// If most common letter & least common letter are different
if(mostCom != leastCom)
{
// Print the most common letter with occurances
cout << "The most common letter is " << mostCom << " with " << countMostCom << " occurances." << endl;
// Print the least common letter with occurances
cout << "The least common letter is " << leastCom << " with " << countLeastCom << " occurances." << endl;
}
// If most common letter & least common letter are same
else
{
// Print the most common (or least common) letter with occurances
cout << "The most common (or least common) letter is " << mostCom << " with " << countMostCom << " occurances." << endl;
}
}























// Driver function
int main()
{
// Open file in reading mode
ifstream infile("letter_count.txt");
// If file not exist
if(!infile)
{
// Print an error message
cout << "File not exist";
// Exit from program
return 0;
}
// String used to store complete file
string s;
// Variable used to store each letter
char letter;
// Array used to store occurances of each letter
int letterCount[26] = {0};
// Read complete file and store in a string
getline( infile, s, '\0');
// Loop counter
int i;
// Loop till end of the string
for(i = 0; s[i]!='\0'; i++)
{
// Call function to count number of occurances of each letter
count(s[i], letterCount);
}
// Call function ot find most common & least common letter & print it
findMostLeast(letterCount);
// Close the file
infile.close();
return 0;
}