#include <iostream>
#include <algorithm>

class AmenaWriter {
public:
    void processLine(const char* line) {
        int length = 0;
        while (line[length] != '\0') {
            if (line[length] != ' ') {
                word[wordIndex++] = line[length];
            } else {
                processWord();
            }
            ++length;
        }
        processWord(); // Process the last word
        std::cout << std::endl;
    }

private:
    char word[100000]; // Maximum word length
    int wordIndex = 0;

    void processWord() {
        std::sort(word, word + wordIndex);

        for (int i = 0; i < wordIndex; ++i) {
            std::cout << word[i];
        }

        std::cout << " ";
        wordIndex = 0; // Reset for the next word
    }
};

int main() {
    AmenaWriter amena;

    char line[100000]; // Maximum line length

    while (std::cin.getline(line, sizeof(line))) {
        amena.processLine(line);
    }

    return 0;
}