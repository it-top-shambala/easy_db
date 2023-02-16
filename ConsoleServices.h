#pragma once

#include <iostream>
#include <vector>

using namespace std;

void PrintAll(vector<string> data) {
    cout << "=== === ===" << endl;
    for (string str : data) {
        cout << str << endl;
    }
    cout << "=== === ===" << endl;
}
