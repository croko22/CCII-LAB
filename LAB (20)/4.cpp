#include <iostream>
#include <memory>
class C1{
private:
	std::shared_ptr<double> d;
public:
	C1(std::shared_ptr<double> value) : d(value) {}
	virtual ~C1() { std::cout << "\nC1 destructor\n"; }
	void print() const { std::cout << "Valor " << *d << "\n"; }
};
class C2 {
private:
	std::shared_ptr<double> d;
public:
	C2(std::shared_ptr<double> value) : d(value) {}
	virtual ~C2() { std::cout << "\nC2 destructor\n"; }
	void print() const { std::cout << "Valor " << *d << "\n"; }
};

int main()
{
	std::shared_ptr<double> d = std::make_shared<double>(7.77);
	std::shared_ptr<C1> c1 = std::make_shared<C1>(d);
	std::shared_ptr<C2> c2 = std::make_shared<C2>(d);
	std::cout << "C1\n";c1->print();
	std::cout << "C2\n";c2->print();
	*d = 72.3;
	std::cout << "C1\n"; c1->print();
	std::cout << "C2\n"; c2->print();
	return 0;
}