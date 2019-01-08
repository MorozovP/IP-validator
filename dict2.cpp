// Создаем словарь

#include "pch.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

void split_string(string s) {




}


int main() {
	{
		unsigned n;
		cin >> n;
		map<string, vector<string>> en_lat_dictionary;

		// считывание
		string tmp;
		getline(cin, tmp);
		for (unsigned i = 0; i != n; ++i) {
			getline(cin, tmp);

			unsigned dash(0);
			unsigned end_line(0);
			for (auto j = 0; j != tmp.length(); ++j) {
				dash = tmp.find('-');
				end_line = tmp.find('endl');
			}
			string key = tmp.substr(0, dash - 1);
			string mean_substring = tmp.substr(dash + 2);
			mean_substring += ',';
			cout << mean_substring << endl;
			for (auto i = 0; i < mean_substring.length(); ++i) {

				if (isspace(mean_substring[i])) {
					size_t pos = i;
					size_t len = 1;
					mean_substring.erase(pos, len);

				}
			}
			cout << mean_substring << endl;
			vector <string> meaning;
			unsigned word_begin(0);
			unsigned word_end(0);
			string tmp_word;
			for (auto i = 0; i != mean_substring.length(); ++i) {
				
				if (ispunct(mean_substring[i])) {
					
					word_end = i;
					try {
						tmp_word = mean_substring.substr(word_begin, word_end);
					}
					catch (out_of_range) {};
					meaning.push_back(tmp_word);
					word_begin = word_end + 1;
				}
			}

			
			
			
			en_lat_dictionary.insert(make_pair(key, meaning));
		}

		// Iterate over the whole data structure
		for (const auto& pair : en_lat_dictionary)
		{
			cout << pair.first << " " << "-" << " ";
			for (const auto& s : pair.second)
				cout << s << "+";
			cout << "\n";
		}
	}


	return 0;
}
