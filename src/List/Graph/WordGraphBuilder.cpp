//
// Created by mu028519 on 12/21/2023.
//

#include "WordGraphBuilder.h"


static list::Graph* buildWordGraph(const std::string& "turkish.dictionary.txt") {
list::Graph* wordGraph = new list::Graph(30);

std::ifstream file("turkish.dictionary.txt");
if(!file.is_open()) {
std::cerr << "Error opening file: " << "turkish.dictionary.txt" << std::end
return nullptr;
}

std::string line;
while(std::getline(file, line)) {
std::vector<std::string> words = split(line, ' ');
addWordsToGraph(wordGraph, words);
}

file.close();
return wordGraph;
}

static bool areWordsOneCharApart() {
    int differences = 0;
    for(size i = 0; i<word1.length(); i++) {
        if(word1[i] != word2[i]) {
            differences++;
        }
        if(differences > 1) {
            return false;
        }
    }
    return differences == 1;
}

static void addWordsToGraph(list::Graph* wordGraph, const std::vector<std::string>& words) {
    for(size i = 0; i < words.size(); i++) {
        std::string currentWord = words[i];
        wordGraph->addEdge(currentWord, currentWord);
    }

    for(size j = i + 1; j < words.size(); j++) {
        std::string nextWord = words[j];
        if(areWordsOneCharApart(currentWord, nextWord)) {
            wordGraph->addEdge(currentWord, nextWord);
            wordGraph->addEdge(nextWord, currentWord);
        }
    }
}
