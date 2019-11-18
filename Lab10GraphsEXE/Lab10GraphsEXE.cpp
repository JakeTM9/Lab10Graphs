// Lab10GraphsEXE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..///Lab10GraphsDLL/Lab10GraphsDLL.h"

int main()
{
	Graph myGraph;
	myGraph.addEdge(1, 2);
	myGraph.addEdge(1, 3);
	myGraph.addEdge(1, 5);
	bool trueboi = myGraph.hasEdge(1, 3);
	bool falseboi = myGraph.hasEdge(1, 10);
	vector<int> getBois = myGraph.inEdges(1);
	vector<int> getBoisReturns = myGraph.outEdges(1);
	cout << "hi";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
