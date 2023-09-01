#include <iostream>
#include <vector>
#include <string>

using namespace std; 

class streamService {
public:
	string servName;
	string showName;
	float servPrice;
	vector<string> servShows;
	
	void add_show(string showName){
		servShows.push_back(showName);
	}
};

int main(){
	streamService; 
	vector<streamService> a;
	while (streamService != "quit"){
		cout << "What service would you like to subscribe to (enter quit if finished): ";
		cin >> streamService;
		a.push_back(streamService());
	}
		
	
return 0;
}