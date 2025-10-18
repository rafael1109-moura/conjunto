# 📚 Implementação da Estrutura de Dados: Array Set (Conjunto)

## Sobre o Projeto

Este repositório contém a implementação da estrutura de dados **Conjunto** (ou *Set*), utilizando a técnica de **Array Fixo** (também conhecida como Array Set) em C++. A classe `Conjunto` armazena elementos do tipo `std::string` e garante a propriedade fundamental de um conjunto: **não permitir elementos duplicados**.

O projeto é modularizado, separando a **declaração** da classe (`Conjunto.hpp`) da sua **implementação** (`Conjunto.cpp`), seguindo as boas práticas da linguagem C++.

### Tecnologias Utilizadas

* **Linguagem:** C++
* **Contêiner:** `std::vector` (utilizado como array de tamanho fixo)
* **Compilador:** g++ (GNU Compiler Collection)

## 🚀 Funcionalidades

A classe `Conjunto` implementa todas as operações básicas de um Set:

| Método | Descrição |
| :--- | :--- |
| `Conjunto()` | Construtor. Inicializa o conjunto com capacidade fixa de 17. |
| `add(string)` | Adiciona um elemento, se ele não for duplicado e houver espaço. |
| `remove(string)`| Remove um elemento existente, usando a técnica de troca com o último elemento. |
| `contains(string)`| Verifica se o elemento está no conjunto. |
| `size()` | Retorna o número atual de elementos. |
| `isEmpty()` | Verifica se o conjunto está vazio. |
| `clear()` | Remove todos os elementos (zera o contador de tamanho). |

---

## 🛠️ Como Compilar e Executar

Para rodar este projeto, você precisará de um compilador C++ (como o g++). As instruções abaixo utilizam o **g++** no terminal (PowerShell, CMD ou Bash).

ex:
g++ main.cpp Conjunto.cpp -o ArraySetTests

chcp 65001 ; .\arraySetTests



### Pré-requisitos

* C++ Compiler (g++ ou equivalente)
* Biblioteca C++ Padrão (`iostream`, `vector`, `string`, `cassert`)

### Estrutura de Arquivos

O projeto é composto por três arquivos principais:

├── Conjunto.hpp # Declaração (Interface) da classe Conjunto ├── Conjunto.cpp # Implementação dos métodos da classe └── main.cpp # Contém a função main() e os testes (testInsert, testRemove)

### 1. Compilação (Build)

É necessário compilar e ligar todos os arquivos `.cpp` juntos para criar o executável:

```bash
g++ main.cpp Conjunto.cpp -o ArraySetTests
O comando cria um arquivo executável chamado ArraySetTests.

2. Execução dos Testes
O executável rodará a suíte de testes (testInsert e testRemove) que verifica a integridade da classe.

.\ArraySetTests

Saída Esperada:
Se todos os testes passarem (o que significa que a lógica do add e remove está correta), você verá a seguinte saída:

Begin - Test_Insert.
... [Mensagens detalhadas de inserção] ...
End - Test_Insert.
Begin - Test_Remove.
... [Mensagens detalhadas de remoção] ...
End - Test_Remove.

End of all tests.

👥 Autor
Rafael de Moura Cassiano Silva
