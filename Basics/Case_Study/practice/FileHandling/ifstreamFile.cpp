#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    
    ofstream outf("ITEM");                                              // Connecting ITEM file to outf

    cout << "Enter item name: ";
    char name[30];  
    cin >> name;                                                        // Get file name from keyboard and 

    outf << name << "\n" ;                                                 // Write to file ITEM

    cout << "Enter the ITEM cost";
    float cost;
    cin >> cost;                                                        // Get cost of keyboard and 

    outf << cost << "\n";                                                 // Write to File ITEM

    outf.close();                                                       // Dissconnect file from outf

    ifstream inf("ITEM");                                               // connnect ITEM file to inf

    inf >> name;                                                        // read name to file ITEM
    inf >> cost;                                                        // read cost to file ITEM
    cout << "\n";
    cout << "Item name: " << name << "\n";
    cout << "Item cost: " << cost << "\n";

    inf.close();
    return 0;

}