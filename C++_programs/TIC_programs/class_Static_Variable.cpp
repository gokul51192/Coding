#include <iostream>
using namespace std;
int x = 100;
class WithStatic {
	static int x ;
	static int y;
	public:
	void print() const {
		cout << "WithStatic::x = " << x << endl;
		cout << "WithStatic::y = " << y << endl;
	}
	void change_static_value(WithStatic & p_obj);
};
void WithStatic :: change_static_value(WithStatic & p_obj)
{
	p_obj.x = 10;
	p_obj.y = 11;
}
	int WithStatic::x = 1;
	int WithStatic::y = x + 1;
// WithStatic::x NOT ::x
int main() {
	WithStatic ws;
	ws.print();
	ws.change_static_value(ws);
	ws.print();
}
