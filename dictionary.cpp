// Создаем словарь

#include "pch.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cctype>

using namespace std;


int main() {
	unsigned n;
	cin >> n;
	map <string, set <string>> en_lat_dictionary;
	map <string, set <string>> lat_en_dictionary;
	en_lat_dictionary["aa"] = { "ab", "ac", "ad" };


	// считывание
	/*for (unsigned i = 0; i != n; ++i) {
		string tmp;
		getline(cin, tmp);
		unsigned dash;
		unsigned comma;
		for (auto j = 0; j != tmp.length(); ++j) {
			dash = tmp.find('-');
			comma = tmp.find(',');
		}
		string key = tmp.substr[0, dash - 1];
		vector <string> meaning;
		for (auto now = dash + 1; now != tmp.length(); ++now) {
			unsigned space = isspace(tmp[now]);
			meaning.push_back(tmp.substr(dash + 1, space));
			dash = space;
		}
		en_lat_dictionary.insert( make_pair( key, meaning ));
	}*/
	// вывод
		for (auto i : en_lat_dictionary) {
			cout << i.first << " ";
			for (auto j : i.second) {
				cout << j << "\n";
		}
			
	}






	return 0;
}
