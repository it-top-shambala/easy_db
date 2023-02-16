#pragma once

#include <fstream>
#include <string>
#include <vector>

using namespace std;

void ExportToFile(string path, vector<string> data) {
    ofstream file;
    file.open(path, ios::trunc);

    if (!file.is_open()) {
        file.close();
        return;
    }

    for (string str : data) {
        file << str << endl;
    }
}

vector<string> ImportFromFile(string path) {
    vector<string> temp;

    ifstream file;
    file.open(path);

    if (!file.is_open()) {
        file.close();
        return temp;
    }

    string line;
    while (getline(file, line)) {
        temp.push_back(line);
    }

    file.close();
    return temp;
}