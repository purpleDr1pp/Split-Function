#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> Split(const std::string& str, char delimiter) {
	std::vector<std::string> split;
	std::string storage;
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == delimiter) {
			split.push_back(storage);
			storage.clear();
		}
		else {
			storage += str[i];
		}
	}
	split.push_back(storage);
	return split;
}
int main() {
	std::string str;
	char delimiter;
	std::getline(std::cin, str);
	std::cin >> delimiter;
	for (auto p : Split(str, delimiter)) {
		std::cout << p << " s" << std::endl;
	}
}



