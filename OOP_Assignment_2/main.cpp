#include<iostream>
#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"
using namespace std;

int main()
{
	Flower flower(13);
	Tree tree(107);
	Bush bush(56);

	cout << "Initial Height: " << endl;
	flower.displayHeight();
	tree.displayHeight();
	bush.displayHeight();

	for (int x = 1; x <= 30; x++)
	{
		flower.grow();
		tree.grow();
		bush.grow();
	}

	cout << "\nFinal Height After 30 Days: " << endl;
	flower.displayHeight();
	tree.displayHeight();
	bush.displayHeight();

	return 0;
}