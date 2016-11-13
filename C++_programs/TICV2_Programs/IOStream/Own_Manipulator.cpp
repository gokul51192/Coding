#include <iostream>
using namespace std;
ostream& anl(ostream& os) {
	return os << '\n';
}
int main() {
	cout << "newlines" << anl << "between" << anl
		<< "each" << anl << "word" << anl;
} ///:~
