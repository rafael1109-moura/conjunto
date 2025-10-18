#include <iostream>
#include <cassert>
#include <string>
#include "Conjunto.hpp" 


void testInsert() {
    Conjunto s; 
    assert( s.size() == 0 );
    
    // Está vazio, logo não contém estes elementos
    assert( s.contains("teste" ) == false );
    assert( s.contains("set" ) == false );
    
    // Primeira adição deve funcionar
    assert( s.add("teste") == true );
    // Tamanho deve ser incrementado
    assert( s.size() == 1 );
    // Deve conter o elemento que foi inserido
    assert( s.contains("teste" ) == true );
    // Não deve permitir a inserção do mesmo elemento
    assert( s.add("teste") == false );
    
    // Ideia parecida com os testes acima
    assert( s.add("set") == true );
    assert( s.size() == 2 );
    assert( s.contains("set" ) == true );
    assert( s.add("set") == false );
    
    // Deve ter o elemento que havia sido inserido anteriormente
    assert( s.contains("teste" ) == true );
}

void testRemove(){
    // Trocado de Set s; para Conjunto s;
    Conjunto s; 
    assert( s.size() == 0);
    
    // BEGIN: Preparação para os testes de remoção
    assert( s.contains("teste1") == false );
    assert( s.contains("teste2") == false );
    assert( s.contains("teste3") == false );
    
    assert( s.add("teste1") == true );
    assert( s.size() == 1 );
    
    assert( s.add("teste2") == true );
    assert( s.size() == 2 );
    
    assert( s.add("teste3") == true );
    assert( s.size() == 3 );
    // END: Neste ponto, o conjunto possui três strings: 'teste1', 'teste2' e 'teste3'
    
    // BEGIN: Início de um caso de teste
    // Verifica que o elemento está no conjunto antes de ser removido
    assert( s.contains("teste2") == true );
    // Verifica o tamanho antes da remoção
    assert( s.size() == 3 );
    // Realiza a remoção e verifica que foi feita a remoção com sucesso
    assert( s.remove("teste2") == true );
    // Verifica o tamanho após a remoção
    assert( s.size() == 2 );
    // Verifica que o elemanto não está mais no conjunto
    assert( s.contains("teste2") == false );
    // Verifica que não é possível remover o mesmo elemento, já que não está mais no conjunto
    assert( s.remove("teste2") == false );
    // END: Fim de um caso de teste
    
    // Mesma sequencia de operações descritas acima
    assert( s.contains("teste3") == true );
    assert( s.size() == 2 );
    assert( s.remove("teste3") == true );
    assert( s.size() == 1 );
    assert( s.contains("teste3") == false );
    assert( s.remove("teste3") == false );
    
    assert( s.contains("teste1") == true );
    assert( s.size() == 1 );
    assert( s.remove("teste1") == true );
    assert( s.size() == 0 );
    assert( s.contains("teste1") == false );
    assert( s.remove("teste3") == false );
}

int main(int argc, const char * argv[]) {
    std::cout << "Begin - Test_Insert.\n";
    
    testInsert();
    
    std::cout << "End - Test_Insert.\n";
    
    std::cout << "Begin - Test_Remove.\n";
    
    testRemove();
    
    std::cout << "End - Test_Remove.\n";
    
    std::cout << "\nEnd of all tests.\n";
    
    return 0;
}
