#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
public:
	int findCenter(vector<vector<int>>& edges){
		int number;
		unordered_map<int,int> mp;
		for(int i=0; i<edges.size(); i++){
			for(int j=0; j<edges[i].size(); j++){
				mp[edges[i][j]]++;
			}
		}
		for(auto it=mp.begin(); it!=mp.end(); it++){
			if(it->second>1){
				number=it->first;
			}
		}
		return number;
	}
};

#endif