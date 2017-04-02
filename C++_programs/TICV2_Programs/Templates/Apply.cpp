#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
template<class Cont1, class PtrMemFun1>
void apply(Cont1& c, PtrMemFun1 f) {
	typename Cont1::iterator it = c.begin();
	while(it != c.end()) {
		//(it->*f)(); // Compact form
		((*it).*f)(); // Alternate form
		it++;
	}
}
class Z {
	int i;
	public:
	Z(int ii) : i(ii) {}
	void g() { i++; }
	friend ostream&
		operator<<(ostream& os, const Z& z) {
			return os << z.i;
		}
};
int main() {
	ostream_iterator<Z> out(cout, ",");
	vector<Z> vz;
	for(int i = 0; i < 10; i++)
		vz.push_back(Z(i));
	copy(vz.begin(), vz.end(), out);
	cout << endl;
	apply(vz, &Z::g);
	copy(vz.begin(), vz.end(), out);
} ///:~
