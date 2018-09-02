//: C04:PriorityQueue6.cpp
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>
using namespace std;
template<class T, class Compare>
class PQV : public vector<T> {
	Compare comp;
	bool sorted;
	void assureHeap() {
		if(sorted) {
			make_heap(vector<T>::begin(), vector<T>::end(), comp);
			sorted = false;
		}
	}
	public:
	PQV(Compare cmp = Compare()) : comp(cmp) {
		make_heap(vector<T>::begin(), vector<T>::end(), comp);
		sorted = false;
	}
	const T& top() {
		assureHeap();
		return vector<T>::front();
	}
	void push(const T& x) {
		assureHeap();
		// Put it at the end:
		vector<T>::push_back(x);
		// Re-adjust the heap:
		push_heap(vector<T>::begin(), vector<T>::end(), comp);
	}
	void pop() {
		assureHeap();
		// Move the top element to the last position:
		pop_heap(vector<T>::begin(), vector<T>::end(), comp);
		// Remove that element:
		vector<T>::pop_back();
	}
	void sort() {
		if(!sorted) {
			sort_heap(vector<T>::begin(), vector<T>::end(), comp);
			reverse(vector<T>::begin(), vector<T>::end());
			sorted = true;
		}
	}
};
int main() {
	PQV<int, less<int> > pqi;
	srand(time(0));
	for(int i = 0; i < 100; i++) {
		pqi.push(rand() % 25);
		copy(pqi.begin(), pqi.end(),ostream_iterator<int>(cout, " "));
		cout << "\n-----\n";
	}
	pqi.sort();
	copy(pqi.begin(), pqi.end(),ostream_iterator<int>(cout, " "));
	cout << "\n-----\n";
	while(!pqi.empty()) {
		cout << pqi.top() << ' ';
		pqi.pop();
	}
} ///:~
