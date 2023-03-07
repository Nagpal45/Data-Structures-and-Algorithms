//Prefix Tree
//Used to search words 

#include <bits/stdc++.h>
using namespace std;

class Trie{
    public:
    class node{
        public:
        bool end;
        node* next[26];
        node(){
        end = false;
            for (int i = 0; i < 26; i++){
                next[i] = NULL;
            }        
        }
    };

    node* trie;
    Trie(){
        trie = new node();
    }

    void insert(string word){
        int i=0;
        node* it = trie;

        while(i<word.size()){
            if(it -> next[word[i]-'a'] == NULL){
                it->next[word[i] - 'a'] = new node();
            }
            it = it->next[word[i]-'a'];
            i++;
        }
        it->end = true;
    }

    bool search(string word){
        int i=0;
        node* it =trie;
        while(i<word.size()){
            if(it->next[word[i]-'a'] == NULL){
                return false;
            }
            it = it->next[word[i]-'a'];
            i++;
        }
        return it->end;
    }
};

int main(){
    string s;
    Trie *myTrie = new Trie();
    vector<string> words = {"ayush", "daasi"};
    for(auto w: words){
        myTrie->insert(w);
    }
    cin>>s;
    if(myTrie->search(s)){
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}