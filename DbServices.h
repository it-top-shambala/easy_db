#pragma once

#include <vector>
#include <string>

using namespace std;

bool Contains(string str, vector<string> data) {
    for (string s : data) {
        if (s.find(str) != -1) return true;
    }
    return false;
}
