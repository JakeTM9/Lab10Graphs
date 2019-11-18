#ifdef LAB10GRAPHSDLL_EXPORTS
#define LAB10GRAPHSDLL_API __declspec(dllexport)
#else
#define LAB10GRAPHSDLL_API __declspec(dllimport)
#endif

#include <vector>
#include <string>
using namespace std;

class LAB10GRAPHSDLL_API Node {
public:
	Node(int Val, Node* Next);
	int val;
	Node* next;
};

class LAB10GRAPHSDLL_API Graph {
private:
	vector<Node*> graphPoints;
	int FindPoint(int val);
public:
	Graph();
	bool addEdge(int b, int c);
	bool removeEdge(int b, int c);
	bool hasEdge(int b, int c);
	bool outEdges(int b);
	bool inEdges(int c);
	string printMatrix();
	~Graph();
};
