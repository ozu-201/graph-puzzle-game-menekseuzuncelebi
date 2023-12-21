//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_EDGE_H
#define DATASTRUCTURES_CPP_EDGE_H
#include <string>
class Edge {
private:
    std::string from;
    std::string to;
    int weight;
    Edge* next;
public:
    Edge();
    Edge(int from, int to, int weight);
    void setNext(Edge* _next);
    Edge* getNext() const;
    int getFrom() const;
    int getTo() const;
    int getWeight() const;
};


#endif //DATASTRUCTURES_CPP_EDGE_H
