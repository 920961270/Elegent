
#include <iostream>
#include <vector>
#include "BiTree.h"
#include "LinkQueue.h"
#include "CSTree.h"
using namespace std;
int main() {
		printf("练习一\n");
		vector<char> *pre = new vector<char>();
		pre->push_back('A'); pre->push_back('B'); pre->push_back('H'); pre->push_back('F'); pre->push_back('D');
		pre->push_back('E'); pre->push_back('C'); pre->push_back('K'); pre->push_back('G');
		vector<char> *mid = new vector<char>();
		mid->push_back('H'); mid->push_back('B'); mid->push_back('D'); mid->push_back('F'); mid->push_back('A');
		mid->push_back('E'); mid->push_back('K'); mid->push_back('C'); mid->push_back('G');
		BiTree<char> *tree = new BiTree<char>(pre, mid);
		printf("---1. Create a binary tree and traverse it ----\n");
		printf("PreOrder: ");
		tree->PreOrder();
		printf("InOrder: ");
		tree->InOrder();
		printf("PostOrder: ");
		tree->PostOrder();
		printf("LevelOrder: ");
		tree->LevelOrder();
		printf("练习二\n");
		vector<Couple<char>* > *ps = new vector<Couple<char>* >();
		ps->push_back(new Couple<char>('A', 'B'));
		ps->push_back(new Couple<char>('B', 'E'));
		ps->push_back(new Couple<char>('A', 'C'));
		ps->push_back(new Couple<char>('B', 'F'));
		ps->push_back(new Couple<char>('A', 'D'));
		ps->push_back(new Couple<char>('C', 'H'));
		CSTree<char> *tree2 = new CSTree<char>(ps);
		tree2->Degree();
		tree2->PreOrder();
		tree2->PostOrder();
		cout << "The height of the tree: " << tree2->Height() << endl;
	}

