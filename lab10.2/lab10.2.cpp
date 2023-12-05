#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Функція для знаходження кількості слів, які починаються з букви "b"
int countWordsStartingWithB(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Unable to open the file: " << fileName << endl;
        return -1;  // Повертаємо -1 у випадку помилки
    }

    int wordCount = 0;
    string word;

    while (file >> word) {
        if (word.size() > 0 && word[0] == 'b') {
            wordCount++;
        }
    }

    file.close();
    return wordCount;
}

int main() {
    string fileName;

    // Користувач вводить ім'я файлу
    cout << "Enter the filename: ";
    cin >> fileName;

    int result = countWordsStartingWithB(fileName);

    if (result != -1) {
        cout << "Number of words starting with 'b': " << result << endl;
    }

    return 0;
}
