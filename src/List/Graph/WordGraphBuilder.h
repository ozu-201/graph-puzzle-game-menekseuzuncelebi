//
// Created by mu028519 on 12/21/2023.
//

#ifndef DATASTRUCTURES_CPP_WORDGRAPHBUILDER_H
#define DATASTRUCTURES_CPP_WORDGRAPHBUILDER_H

#include "Graph.h"


class WordGraphBuilder {

private:
    static buildWordGraph(const std::string& "turkish.dictionary.txt");
    static void addWordsToGraph(list::Graph* wordGraph, const std::vector<std::string>& words);
    static bool areWordsOneCharApart(const std::string& word1, const std::string& word2);

};


#endif //DATASTRUCTURES_CPP_WORDGRAPHBUILDER_H
