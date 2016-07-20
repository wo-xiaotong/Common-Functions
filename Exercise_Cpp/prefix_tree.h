#include<string>
#include<algorithm>
using std::string;

class TrieNode {
public:
	// Initialize your data structure here.
	TrieNode() {
		for (TrieNode* &p : next){
			p = nullptr;
		}
		count = 0;
	}

	~TrieNode(){
		for (TrieNode* p : next){
			delete p;
			p = nullptr;
		}
	}

	TrieNode* next[26];
	int count;
};

class Trie {
public:
	Trie() {
		root = new TrieNode();
	}

	// Inserts a word into the trie.
	void insert(string word);
	

	// Returns if the word is in the trie.
	bool search(string word);

	// Returns if there is any word in the trie
	// that starts with the given prefix.
	bool startsWith(string prefix);
	
	void printAllString(){
		print(root, string());
	}

	int countString(){
		return root->count;
	}

	bool remove(string word);

	~Trie(){
		delete root;
	}
private:
	TrieNode* root;
	void print(TrieNode *now,string& ret);
};

void Trie::insert(string word){
	TrieNode*now = root;
	for (char c : word){
		if (now->next[c - 'a'] == nullptr)
			now->next[c - 'a'] = new TrieNode();
		now = now->next[c - 'a'];
	}
	++now->count;
	++root->count;
}

bool Trie::search(string word){
	TrieNode*now = root;
	for (char c : word){
		if (now->next[c - 'a'] != nullptr)now = now->next[c - 'a'];
		else return false;
	}
	return now->count != 0;
}

bool Trie::startsWith(string prefix){
	TrieNode*now = root;
	for (char c : prefix){
		if (now->next[c - 'a'] != nullptr)now = now->next[c - 'a'];
		else return false;
	}

	return true;
}

void Trie::print(TrieNode *now,string& ret){
	if (now!=root && now->count != 0)cout << ret << endl;

	for (int i = 0; i < 26; i++){
		if (now->next[i] != nullptr){
			ret.push_back('a'+i);
			print(now->next[i],ret);
			ret.pop_back();
		}
	}
}

bool Trie::remove(string word){
	if (word.empty())return true;

	TrieNode*now = root;
	for (char c : word){
		if (now->next[c - 'a'] != nullptr)now = now->next[c - 'a'];
		else return false;
	}

	if (now->count == 0)return false;

	--now->count;
	--root->count;
	return true;
}