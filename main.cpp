#include <iostream>
#include <string>
#include <vector>

#include "FileServices.h"
#include "DbServices.h"
#include "ConsoleServices.h"

using namespace std;

int main() {
    system("chcp 65001");

    string student;
    string new_file;

    string path = "J:\\easy_db\\source.dat";
    vector<string> data = ImportFromFile(path);

    bool exit = false;
    do {
        cout << "+++ С Т У Д Е Н Т Ы +++" << endl;
        cout << "1. Показать всех студентов" << endl;
        cout << "2. Добавить нового студента" << endl;
        cout << "3. Сохранить в новый файл" << endl;
        cout << "0. Выход" << endl;

        char input;
        cout << "Введите номер задачи: ";
        cin >> input;

        switch (input) {
            case '1':
                PrintAll(data);
                break;
            case '2':
                cout << "Введите имя студента - ";
                cin >> student;
                data.push_back(student);
                ExportToFile(path, data);
                break;
            case '3':
                cout << "Введите имя файла: ";
                cin >> new_file;
                ExportToFile(new_file, data);
                break;
            case '0':
                exit = true;
                break;
            default:
                cout << "Повторите ввод. Вы ввели неправильный номер задачи." << endl;
                break;
        }
    } while (!exit);

    cout << "До встречи...";
    ExportToFile(path, data);

    return 0;
}
