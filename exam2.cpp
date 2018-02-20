#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile ("std.txt");
    if (myfile.is_open())
    {
        myfile << "yuwadee ponok.\n";
        myfile.close();
    }

}
    else cout << "Unable to open file";

    do
{
    cout << "Menu" << endl;
    cout << "1.for add student." << endl;
    cout << "2.list student." << endl;
    cout << "3.quit." << endl;
    cout << "Please enter menu : ";
    cin >> cmd;

    if(cmd == 1)
    {
        cout << "Enter std name : ";
        cin >> name;
        writeFile.open("std.txt", fstream::app);

        if (writeFile.is_open())
        {
            writeFile << name << endl;
            writeFile .close();
        }
        else
        {
            cout << "Unable to open file";
        }
    }
    else if (cmd == 2)
    {
        readFile.open("std.txt");
        if (readFile.is_open())
        {
            while (getline (readFile,line))
            {
                cout << line << endl ;
            }
            readFile.close();
        }
    }
    else{
        break;
    }
}
    while(1);

            return 0;
        }
