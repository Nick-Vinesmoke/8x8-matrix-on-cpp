#include <iostream>
#include "windows.h"

using namespace std;

int display[8][8]{
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
    { 0,0,0,0,0,0,0,0 },
};
string choose = "";
string newRow = "";



void SetNewRow(int row) 
{

    for (int x = 0; x < 8; x++)
    {
        display[row][x] = int(newRow[x]);
    }
    newRow = "";
}

void Draw()
{
    cout << "DRAW" << endl << endl << endl;
    int i1 = 0;
    int check = 0;
    for (int i = 0; i < 8; i++) 
    {
        
        for (i1 = 0; i1 < 8; i1++)
        {
            check = display[i][i1];
            if (check == 49) {
                cout << " #";
            }
            else
            {
                cout << " -";
            }
        }
        cout << "\n";
        i1 = 0;
        
    }



    cout << endl;
    cout << "choose function" << endl << endl << endl;
    cout << "\"set\" to change value of pixel" << endl;
    cout << "\"quit\" to quit)" << endl << endl;

    cin >> choose;


    if (choose == "set")
    {
        system("cls");
        cout << "SET" << endl << endl << endl;

        cout << "input like this 00000000, no more then 8 and no less.\n It is row 1 - on, 0 - of \n If 01000000 in row 1 column 1 - on, output: - # - - - - -" << endl;
        for (int row = 0; row < 8; row++) 
        {
            printf("row %d: ",row);
            cin >> newRow;
            SetNewRow(row);

        }

        cout << endl;

        cout << "choose function" << endl << endl << endl;
        cout << "\"draw\" for drow your image" << endl;
        cout << "\"quit\" to quit)" << endl << endl;

        cin >> choose;

        if (choose == "draw")
        {
            system("cls");
            Draw();
        }
        if (choose == "quit")
        {
            system("cls");
            abort();
        }
        
    }
    if (choose == "quit")
    {
        system("cls");
        abort();
    }
}


void Set()
{
    cout << "SET" << endl << endl << endl;

    cout << "input like this 00000000, no more then 8.\n It is row 1 - on, 0 - of \n If 01000000 in row 1 column 1 - on, output: - # - - - - -" << endl;
    for (int row = 0; row < 8; row++)
    {
        printf("row %d: ", row);
        cin >> newRow;
        SetNewRow(row);

    }
    cout << endl;

    cout << "choose function" << endl << endl << endl;
    cout << "\"draw\" for drow your image" << endl;
    cout << "\"quit\" to quit)" << endl << endl;

    cin >> choose;

    if (choose == "draw")
    {
        system("cls");
        Draw();
    }
    if (choose == "quit")
    {
        system("cls");
        abort();
    }
    
}


int main()
{

    for (int i = 0; i < 8; i++) 
    {
        for (int i = 0; i < 8; i++)
        {
            cout << " -";
        }
        cout << "\n";
    }
    
    cout << "choose function" << endl << endl << endl;
    cout << "\"draw\" for drow your image" << endl;
    cout << "\"set\" to change value of pixel" << endl;
    cout << "\"quit\" to quit)" << endl << endl;
    
    cin >> choose;

    if (choose == "draw") 
    {
        system("cls");
        Draw();
    }
    if (choose == "set")
    {
        system("cls");
        Set();
    }
    if (choose == "quit")
    {
        system("cls");
        abort();
    }
    
}




