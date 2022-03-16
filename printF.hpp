#include<iostream>

template <typename T>
void printF(const T &data) {
	(std::cout << data).flush();
}

template <typename T, typename...Args>
void printF(const T &first, Args...args) {
	std::cout << first;
	printF(args...);
}
