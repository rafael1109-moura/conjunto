#include "Conjunto.hpp" 
#include <string> 
#include <iostream> 

using namespace std;

// CONSTRUTOR
Conjunto::Conjunto() : vetor(capacidadeMaxima), primeiraPosicaoVazia(0) {}

//metodo adicionar
bool Conjunto::add(string elemento){
    //evita que o vetor passe do limite
    if (primeiraPosicaoVazia >= capacidadeMaxima){
        cout << "erro: vetor cheio" << endl;
        return false;
    }
    
    for (int i = 0; i < primeiraPosicaoVazia; i++){
        if (vetor[i]== elemento){
            cout <<"erro: elemento repetido"<<endl;
            return false;
        }
    } 
    
    vetor [primeiraPosicaoVazia] = elemento;
    primeiraPosicaoVazia ++;
    cout <<"inserido com sucesso" << endl;
    return true;
}

//metodo remover
bool Conjunto::remove(string elemento){
    for (int i = 0; i < primeiraPosicaoVazia; i++){
        if (vetor[i] == elemento){
            
            //temos que trocar o ultimo com o elemento que vai ser removido
            vetor[i] = vetor[primeiraPosicaoVazia - 1]; 
            
            //após a troca, basta diminuir a ultima posição vazia que o proximo que for adifionado vai sobrescrever a mesma
            primeiraPosicaoVazia --; 
            
            cout <<"removido com sucesso" << endl;
            return true;
        }
    }
    
    // Elemento não encontrado (retorno movido para fora do loop)
    cout <<"vetor não encontrado" << endl;
    return false;
} 

// Verifica se o conjunto já contém o elemento
bool Conjunto::contains (string elemento) const {
    for (int i = 0; i < primeiraPosicaoVazia; i++){
        if(vetor [i] == elemento){
            cout<<"já contém o elemento " << elemento << endl;
            return true;
        }
    }
    // Retorno movido para fora do loop
    cout <<"não contém o elemento " << elemento << endl;
    return false;
}

//Verifica se o conjunto é vazio
bool Conjunto::isEmpty () const {
    if (primeiraPosicaoVazia == 0){
        cout <<"o conjunto está vazio" << endl;
        return true;
    }
    else {
        cout <<"o conjunto não está vazio" << endl;
        return false;
    }
}

//Remove todos os elementos do conjunto
void Conjunto::clear (){
    primeiraPosicaoVazia = 0;
} 

//Retorna o número de elementos contidos pelo conjunto
int Conjunto::size () const {
    return primeiraPosicaoVazia; 
}

// Método auxiliar para exibir o conteúdo 
void Conjunto::exibir() const {
    cout << "Conjunto (" << size() << "): { ";
    for (int i = 0; i < primeiraPosicaoVazia; i++) {
        cout << vetor[i] << " ";
    }
    cout << "}" << endl;
}
