#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Graph{
	vector<vector<int>> adj_matrix;
public:
	Graph(int n){ //constructor para inicializar el grafo con n vertices
		adj_matrix=vector<vector<int>> (n,vector<int>(n,0));
	}

	//funcion para agregar una conexion entre nodos
	void add_edge(int u, int v){
		adj_matrix[u][v]=1;
		adj_matrix[v][u]=1;
		//de esta forma u y v ya están conectados
	}
	//funcion para imprimir
	void print(){
		cout<<"Adjacency Matrix for the Graph: "<<endl;
		int n=adj_matrix.size();
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<adj_matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};

#endif