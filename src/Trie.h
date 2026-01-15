#ifndef TRIE_H
#define TRIE_H
#define ASCII_NUMBER 26
using namespace std;

struct TrieNode{
    TrieNode *children[ASCII_NUMBER]; //possiveis 26 ponteiros para os filhos do nó (26 é o número de letras no alfabeto)
    bool is_end_of_word; //vou associar a um nó a validação que ele é o fim de um caminho para uma palavraa
    int count; //numero de ocorrencias da palavra no arquivo
};



#endif


