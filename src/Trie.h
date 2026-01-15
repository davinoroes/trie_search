#ifndef TRIE_H
#define TRIE_H
#define ASCII_NUMBER 26
using namespace std;

struct TrieNode{
    TrieNode *children[ASCII_NUMBER]; //possiveis 26 ponteiros para os filhos do nó (26 é o número de letras no alfabeto)
    bool is_end_of_word; //vou associar a um nó a validação que ele é o fim de um caminho para uma palavraa
    int count; //numero de ocorrencias da palavra no arquivo
};

class Trie {
public:
    Trie(); //construtor

    ~Trie(); //destrutor

    void insert(const string &word); //declaracao da funcao de insercao de palavra

    bool search(const string &word); //declaracao da busca pela palavra(vai retornar true se a palavrar tiver no arquivo)

    int get_count(const string &word); //aqui vai ser a contagem de quantas vezes a palavra aparece (achei um projeto muito simples apenas dizer se a palavra tá la o não)


private:
    TrieNode *root;

    //criacao e iniacao de um nó
    TrieNode* create_node();

    void freenode(TrieNode *node); 
    /*
    vou fazer uma funçao de liberar memoria pois por mais 
    q seja uma implemetção otimizada no ponto de vista de 
    complexidade, no ponto de vista de memoria é ruim
    */

};

#endif


