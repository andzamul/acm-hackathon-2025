#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string> valueToBuilding = {
        {1, "Science Hall 1"},
        {2, "Science Hall 2"},
        {3, "Markstein Hall"},
        {4, "University Hall"},
        {5, "Academic Hall"},
        {6, "Social and Behavioral Sciences Hall"},
        {7, "Kellogg Library"},
        {8, "Extended Learning Building"}
    };
    int classBuildings[] = {0, 0, 0, 0, 0, 0, 0, 0};
    bool building1Chosen=false, building2Chosen=false, building3Chosen=false, building4Chosen=false, building5Chosen=false, building6Chosen=false, building7Chosen=false, building8Chosen=false;
    bool waitingForInput;
    int currentBuilding;
    cout << "Please choose your schedule (input 1-8):\n";
    for (int i=0; i < 8; i++){
        waitingForInput = true;
        cout << "Class " << i + 1 << ":\n";
        if (!building1Chosen){
            cout << "1) Science Hall 1" << endl;
        }
        if (!building2Chosen){
            cout << "2) Science Hall 2" << endl;
        }
        if (!building3Chosen){
            cout << "3) Markstein Hall" << endl;
        }
        if (!building4Chosen){
            cout << "4) University Hall" << endl;
        }
        if (!building5Chosen){ 
            cout << "5) Academic Hall" << endl;
        }
        if (!building6Chosen){
            cout << "6) Social and Behavioral Sciences Hall" << endl;
        }
        if (!building7Chosen){
            cout << "7) Kellogg Library" << endl;
        }
        if (!building8Chosen){
            cout << "8) Extended Learning Building" << endl;
        }
        while (waitingForInput){
            cout << "Select building of class " << i + 1 << ": ";
            cin >> currentBuilding;
            if (currentBuilding == 1 && building1Chosen == false){
                building1Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            } 
            else if (currentBuilding == 2 && building2Chosen == false){
                building2Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 3 && building3Chosen == false){
               building3Chosen = true;
               waitingForInput = false;
               classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 4 && building4Chosen == false){
               building4Chosen = true;
               waitingForInput = false;
               classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 5 && building5Chosen == false){
                building5Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 6 && building6Chosen == false){
                building6Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 7 && building7Chosen == false){
                building7Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            }
            else if (currentBuilding == 8 && building8Chosen == false){
                building8Chosen = true;
                waitingForInput = false;
                classBuildings[i] = currentBuilding;
            }
            else {
                cout << "Invalid input. Please choose a remaining building.\n";
            }
        }
    }
    cout << "Schedule: \n";
    for (int i=0; i<8;i++){
        cout << "Class " << i+1 << ": " << valueToBuilding[classBuildings[i]] << endl;
    }
    return 0;
}