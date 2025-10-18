#ifndef CONJUNTO_HPP
#define CONJUNTO_HPP

#include <vector>
#include <iostream>
#include <string> 

using namespace std;

class Conjunto {
private:
    
    vector<string> vetor; 
    int primeiraPosicaoVazia;
    static const int capacidadeMaxima = 17;

public:
    Conjunto();

    bool add(string elemento);
    bool remove(string elemento);
    bool contains(string elemento) const;
    bool isEmpty() const;
    void clear();
    int size() const;
    void exibir() const; 
};

#endif // CONJUNTO_HPP