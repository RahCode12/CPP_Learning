#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // A map stores unique key-value pairs and keeps keys sorted.
    map<string, int> marks = {{"Rahul", 90}, {"Kamalika", 100}};

    // Add or update a value with operator[].
    marks["Raka"] = 95;

    // insert() does not overwrite an existing key.
    marks.insert({"Kams", 100});

    cout << "Number of students: " << marks.size() << '\n';

    // Access an existing key with at(). It throws if the key is missing.
    cout << "Rahul: " << marks.at("Rahul") << '\n';

    // find() checks for a key without inserting anything.
    string name = "Raka";
    auto result = marks.find(name);
    if (result != marks.end()) {
        cout << name << " has " << result->second << " marks\n";
    }

    cout << "\nAll students in key order:\n";
    for (const auto& entry : marks) {
        cout << entry.first << ": " << entry.second << '\n';
    }

    // erase() removes a key. count() is 1 if it exists, otherwise 0.
    if (marks.count("Kams") == 1) {
        marks.erase("Kams");
    }

    cout << "\nAfter erasing Kams:\n";
    for (const auto& [student, score] : marks) {
        cout << student << ": " << score << '\n';
    }
}