#include <iostream>
#include <fstream>
#include <string>
using namespace std;



//Create Anime Class, only organizing names today, this should be enoug.

class Animal {
public:
    string name;
    string species;
};



//Create Node for Linked List
struct Node {
string species;
string name;
Node* next;
};

int main()
{

//Read Names from animalNames.txt, Sample Output
fstream animalNames;
animalNames.open("animalNames.txt", ios::in);
    if (animalNames.is_open()) {
        string line;
        while (getline(animalNames, line)){
            cout << line << endl;
        }
        animalNames.close();
    }


while(getline(animalNames, line)) {
    if (line.find("Hyena")) != npos {
            animalNames.
    }
}
















return 0;}
