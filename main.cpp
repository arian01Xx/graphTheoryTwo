#include "graph.hpp"
#include "solution.hpp"
#include "print.hpp"

using namespace std;

int main(){

	//numero de vertices-nodos
	int n=4;
	Graph g(n);

	g.add_edge(0,1);
	g.add_edge(0,2);
	g.add_edge(1,3);
	g.add_edge(2,3);

	cout<<"Graph Representation: "<<endl;
	g.print();
	cout<<endl;

	Solution solution;
	vector<vector<int>> in={{1,2},{2,3},{4,2}};
	int out=solution.findCenter(in);
	cout<<"first problem: "<<endl;
	printVectorInt2(in);
	cout<<"answer: "<<endl;
	cout<<out<<endl;


	return 0;
}