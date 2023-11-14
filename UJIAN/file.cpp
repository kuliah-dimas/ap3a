#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    string fileName;
    string content;
    char isInput;

    cout << "Masukkan nama file: ";
    cin >> fileName;

    ofstream writeFile(fileName);

    while (writeFile.is_open())
    {
        cout << "Masukkan content: ";
        cin >> content;

        writeFile << content << endl;

        cout << "Ingin stop [y/n]: ";
        cin >> isInput;
        if (isInput == 'y' || isInput == 'Y')
        {

            ifstream readFile(fileName);

            cout << "Isi file: " << endl;
            string text;
            while (getline(readFile, text))
            {
                cout << text << endl;
            }
            writeFile.close();
            readFile.close();
        }
    }
}
