// Создаем словарь

#include "pch.h"
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cctype>
#include <vector>

using namespace std;
/*

void find_key_word(string s) {
	auto dash = s.find('-');
	string key = s.substr(0, dash);
	string meaning_substring = s.substr(dash + 1);
}

void split_sub_string(string s) {
	
	unsigned word_begin(0);
	unsigned word_end(0);
	vector <string> meaning;
	string tmp_word;
	for (auto i = 0; i != s.length(); ++i) {
		if (ispunct(s[i])) {
		word_end = i;

		try {
			tmp_word = s.substr(word_begin, word_end);
			s = s.substr(word_end);
		}
		catch (out_of_range) {};
		meaning.push_back(tmp_word);
		

	// return 

}
*/

int main() 
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
			cout << mean_substring << endl;
			vector <string> meaning;
			//unsigned word_begin(0);
			//unsigned word_end(0);
			string tmp_word;
			for (auto j = 0; j != mean_substring.length(); ++j) {
				if (isalpha(mean_substring[j])) {
					
					//word_end = j;
					for (auto i = j; i != mean_substring.length(); ++i) {

						if (!isalpha(mean_substring[i])) {
							//word_begin = j;
							//word_end = i;
							cout << j << " " << i << endl;
							try {
								tmp_word = mean_substring.substr(j, i - j);

							}
							catch (out_of_range) {};
							meaning.push_back(tmp_word);
							
							j = i;
							break;
						}
					}
					
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
	


	return 0;
}
