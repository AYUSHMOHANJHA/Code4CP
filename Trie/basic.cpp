/*
Insert and search costs O(key_length), 
however the memory requirements of Trie is O(ALPHABET_SIZE * key_length * N)
where N is number of keys in Trie.

Trie is an efficient information reTrieval data structure.
Using Trie, search complexities can be brought to optimal limit (key length). 
If we store keys in binary search tree, a well balanced BST will need time 
proportional to M * log N, where M is maximum string length and N is number of
keys in tree. Using Trie, we can search the key in O(M) time. 
However the penalty is on Trie storage requirements 
*/

#include<bits/stdc++.h>

using namespace std;

const int Alphabet_Size = 26;

struct TrieNode
{
    struct TrieNode *children[Alphabet_Size];
    bool isEndOfWord;
};

struct TrieNode *getNode(void)
{
    struct TrieNode *Node = new TrieNode;

    Node->isEndOfWord = false;
    for(int i=0; i<Alphabet_Size;i++)
        Node->children[i] = NULL;
    return Node;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *newNode = root;

    for(int i=0; i<key.length();i++)
    {
        int index = key[i] - 'a';
        if(!newNode->children[index])
            newNode->children[index] = getNode();
        
        newNode = newNode->children[index];
    }
    newNode->isEndOfWord = true;
}
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *newNode = root;

    for(int i=0; i<key.length();i++)
    {
        int index = key[i] - 'a';
        if(!newNode->children[index])
            return false;
        
        newNode = newNode->children[index];
    }
    return (  newNode->isEndOfWord );
}
int main()
{
    string keys[] = {"ayush","jha","rishi","jh"};

    int n = sizeof(keys)/sizeof(keys[0]);

    struct TrieNode *root = getNode();

    for(int i=0;i<n;i++)
    {
        insert(root,keys[i]);
    }

    search(root,"jhaa") ? cout<<"yes\n":cout<<"no\n";
    search(root,"ayush") ? cout<<"yes\n":cout<<"no\n";
    search(root,"jha") ? cout<<"yes\n":cout<<"no\n";
    return 0;
}