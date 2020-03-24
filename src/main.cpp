#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "error.hpp"
#include "calc.hpp"

using namespace std;

static void disp_help(void)
{
    string line;
    ifstream myfile ("static/help");

    if (myfile.is_open()) {
        while (getline(myfile,line)) {
            cout << line << '\n';
        }
        myfile.close();
    }
}

int main(int argc, char **argv)
{
    Calc mainCalc;

    if (argc == 2) {
        if (strcmp(argv[1], "-h") == 0) {
            disp_help();
            return 0;
        }
    } else if (argc == 3) {
        if (!Error::IsNumber(argv[1]) || !Error::IsNumber(argv[2]))
            return 84;

        mainCalc.Do(atoi(argv[1]), stof(argv[2]));
    } else if (argc == 4) {

    }

    return 85;
}