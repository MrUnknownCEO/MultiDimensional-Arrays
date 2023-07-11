#include <iostream>
using namespace std;

int main()
{
    //game made with multi-dimensional array
    //we use bool for the strke to be true or false, and we put 1 to indicate
    //there is a ship there
    bool ships[4][4] = {
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1},
        {0, 1, 0, 0}
    };

    //keep track of how many hits the player has and how many turns they have played
    int hits = 0;
    int numberofTurns = 0;

    //allow the player to keep going until they hit all ships
    while(hits < 7) {
        int row, column;

        cout<<"Selectin coordinates\n";

        //ask the player for a row
        cout<<"Choose a number from 0 and 3\n";
        cin>>row;

        //ask the player for a column
        cout<<"choose a number from 0 and 3\n";
        cin>>column;

        //check to see if a ship exists at the specified location
        if(ships[row][column]) {
            //if the player hits a ship, remove it by settin the value to zero
            ships[row][column] = 0;

            //increase the hit counter
            hits++;

            //tell the player that they have hit a ship and how many ships are left
            cout<< "HIT!" << (7-hits) << " ships left\n";
        } else {
            //tell the player that they missed
            cout<<"Miss!\n";
        }
        numberofTurns++;
    }

    cout<<"Victory!\n";
    cout<<"You won my nigga but in " <<numberofTurns <<" turns"<<endl;





    //This is a two dimensional array, the most common one taught in school
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    //accessing the elements of the multi-dimensional array
    cout<<letters[1][2]<<endl;

    //chaning the elements of the multi-dimensional array
    letters[0][1] = "Z";
    cout<<letters[0][1]<<endl;

    //looping throught the multi-dimensional array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            cout <<"the elments are "<<letters[i][j]<<endl;
        }
    }


    //This is a three dimensional array and the more dimensions added the more complicated the code
    string letter[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    //looping through a three-dimensional array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int z = 0; z < 2; z++) {
                cout<<"the element of Three-dimensional array are "<<letter[i][j][z]<<endl;
            }
        }
    }

    return 0;
}
