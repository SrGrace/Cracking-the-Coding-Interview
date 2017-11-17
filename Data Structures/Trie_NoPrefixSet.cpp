
// https://www.hackerrank.com/challenges/no-prefix-set/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct trie
{
    int isLeaf;
    int cnt;
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

bool insert(trie *root, string s)
{
    trie *curr = root;
    for(int i=0; i<s.size(); i++)
    {
        int idx = int(s[i]-'a');
        if(!curr->child[idx])
            curr->child[idx] = getNode();
        if(curr->isLeaf)
            return 0;
        curr->cnt++;
        curr = curr->child[idx];
    }  
    curr->isLeaf = 1;
    return ++curr->cnt <= 1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    trie *root = new trie();
    
    int n; cin>>n; string s;
    
    for(auto i=0; i<n; i++)
    {
        cin>>s;
        trie *tmp = root;
        if(!insert(tmp, s))
        {
            cout<<"BAD SET\n"<<s;
            break;
        }         
        else if(i == n-1){
            cout<<"GOOD SET\n";
        }
    }
    return 0;
}


