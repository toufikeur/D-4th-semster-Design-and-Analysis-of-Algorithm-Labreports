#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c) {
  return c == 'a' || c == 'e';
}

bool is_consonant(char c) {
  return c == 'b' || c == 'c' || c == 'd';
}

string split_into_syllables(const string& word) {
  string syllables;

  for (int i = 0; i < word.size(); i++) {
    if (is_vowel(word[i])) {
      // If the current character is a vowel, we might have a CV or CVC syllable.
      if (i == 0 || is_consonant(word[i - 1])) {
        // CV syllable
        syllables += '.';
      }
      if (i < word.size() - 1 && is_consonant(word[i + 1])) {
        // CVC syllable
        syllables += word[i + 1];
        i++;
      }
      syllables += word[i];
    } else {
      // If the current character is a consonant, we might have a CVC syllable.
      if (i < word.size() - 1 && is_vowel(word[i + 1])) {
        syllables += word[i];
        syllables += '.';
      }
    }
  }

  return syllables;
}

int main() {
  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    int N;
    cin >> N;

    string word;
    cin >> word;

    string syllables = split_into_syllables(word);

    cout << syllables << endl;
  }

  return 0;
}
