
// https://www.hackerrank.com/challenges/ctci-contacts/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct trie
{
    int isLeaf;
    trie *child[26];
};

trie *getNode()
{
    trie *node = new trie();
    for(int i=0; i<26; i++)
    {
        node->child[i] == NULL;
    }
    node->isLeaf = 0;
    return node;
}

void insert(trie *root, string s)
{
    trie *curr = root;
    for(int i=0; i<s.size(); i++)
    {
        int idx = int(s[i]-'a');
        if(!curr->child[idx])
            curr->child[idx] = getNode();
        curr  = curr->child[idx];

        curr->isLeaf++;
    }      
}

int search(trie *root, string s)
{
    trie *curr = root;
    for(int i=0; i<s.size(); i++)
    {
        int idx = int(s[i]-'a');
        if(!curr->child[idx])
            return 0;
        curr = curr->child[idx];
    }
    return curr->isLeaf;
}
    


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    trie *root = new trie();
    int n; cin>>n;
    
    while(n--)
    {
        string s, s1;
        cin>>s>>s1;
        if(s == "add")
        {
            trie *tmp = root;
            insert(tmp, s1);
        }
        else if(s == "find")
        {
            trie *tmp = root;
            cout<<search(tmp, s1)<<"\n";
        }
    }
    
    return 0;
}


