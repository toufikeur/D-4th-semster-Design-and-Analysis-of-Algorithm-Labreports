#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int getMinimumMelodies(string melody) {
    unordered_map<char, char> lastSound;
    int melodies = 0;

    for (char note : melody) {
        if (lastSound.count(note) && lastSound[note] != note) {
            lastSound[note] = note;
        } else {
            melodies++;
            lastSound.clear();
            lastSound[note] = note;
        }
    }

    return melodies;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string melody;
        cin >> melody;

        int minimumMelodies = getMinimumMelodies(melody);
        cout << minimumMelodies << endl;
    }

    return 0;
}

