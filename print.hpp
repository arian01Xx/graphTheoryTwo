#ifndef PRINT_VECTOR_HPP
#define PRINT_VECTOR_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void printVectorInt2(vector<vector<int>> ans){
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}

#endif