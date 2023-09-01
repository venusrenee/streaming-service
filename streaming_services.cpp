#include <iostream>
#include <vector>
#include <string>

using namespace std;

class streamService {
public:
	string servName;
	float servPrice;
	vector<string> servShows;

	void add_show(string showName) {
		servShows.push_back(showName);
	}
};

int main() {
	vector<streamService> b;
	while (1) {
		streamService a;
		cout << "What service would you like to subscribe to (enter quit if finished): ";
		cin >> a.servName;
		if (a.servName == "quit") {
			break;
		}
		cout << "What is the monthly price: ";
		cin >> a.servPrice;
		string showName;
		while (1) {
			cout << "What show would you like to watch (enter done if finished): ";
			cin >> showName;
			if (showName == "done") {
				break;
			}
			a.add_show(showName);
		}
		b.push_back(a);
	}

	float totalBill = 0;
	for (int i = 0; i < b.size(); i++) {
		totalBill += b[i].servPrice;
	}
	cout << "Your total bill is: " << totalBill << endl;
	cout << "You are subscribed to: ";
	
	for (int i = 0; i < b.size(); i++) {
		cout << b[i].servName << "; ";
	}
	cout << endl << "Your watchlist consists of: ";
	for (int i = 0; i < b.size(); i++) {
		for (int j = 0; j < b[i].servShows.size(); j++) {
			cout << b[i].servShows[j] << "; ";
		}
	}
	return 0;
}