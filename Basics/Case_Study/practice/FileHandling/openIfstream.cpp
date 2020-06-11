#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;                                          // Create output stream
    fout.open("country");                                   // Connect "country" to it

    fout << "United States of America \n";
    fout << "United Kingdom\n";
    fout << "South Korea";  

    fout.close();                                           // Disconnect country

    fout.open("capital");


    fout << "Washington \n";
    fout << "London\n";
    fout << "Seoul\n";  

    fout.close();   

    // Reading the files
    const int N = 80;                                       // Size of line
    char line[N]; 

    ifstream fin;                                           // create input stream
    fin.open("country");

    cout << "Contents of country file \n";

    while(fin)
    {
        fin.getline(line, N);
        cout << line << "\n";
    }

    fin.close();

    return 0;
}