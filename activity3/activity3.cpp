/*
COSC 1437 Activity 3
Baseball Statistics
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Structure to hold batting statistics
struct  Player
{
string name;
int atBats;
int hits;
};



int main()
{
    ifstream statFile;
    string playerName;
    int bats, numHits;

    Player* baseballArray[100];
    Player* aPlayer;
    int numPlayers = 0;

    statFile.open("stats.txt");
    // Continue reading until the end of file
    while (statFile >> playerName)
    {
    statFile >> bats >> numHits;

    // Dynamically create a new Player
    aPlayer = new Player;
    aPlayer->name = playerName;
    aPlayer->atBats = bats;
    aPlayer->hits = numHits;

    // Store the pointer to the Player struct in the array
    baseballArray[numPlayers++] = aPlayer;
    // Display this information
    cout << aPlayer->name << " has " << aPlayer->atBats << " at bats and "
    << aPlayer->hits << " hits" << endl;
    }

    //This line of code will display the highest batting average
    Player* bestPlayer = nullptr;
    double bestAverage = 0;

    for(int i = 0; i < numPlayers; i++){
        double average = (double) baseballArray[i] ->hits / baseballArray[i]->atBats;
        if(average > bestAverage){
            bestAverage = average;
            bestPlayer = baseballArray[i];
        }
    }

    if(bestPlayer != nullptr){
        cout << "This player has the highest hitting average: " << bestPlayer->name << " With an average hit of " << bestAverage << endl;
    }

    statFile.close();  // close the file
    // For Activity 3: Display which player has the highest batting average.
    // Display the player's name and average
}