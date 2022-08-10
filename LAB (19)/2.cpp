#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Find {
public:
	vector<int> operator()(typename vector<T>::iterator begin, typename vector<T>::iterator end,T d) {
		vector<int> r{};
		for (auto i = begin; i < end; i++) {
			if(d == *i) r.push_back(distance(begin, i));//Pos considerando index desde 0
		}
		return r;
	}
};

int main()
{
	vector<int> v {1,2,3,4,3,5,2,5,3,5};
	vector<int>::iterator ptr0 = v.begin();
	vector<int>::iterator ptr1 = v.end();
	Find<int> f;
	vector<int> r = f(ptr0,ptr1,3); 
	cout << "Del vector:" << endl;
	for (auto i : v) cout << i << " ";//2 4 8
	cout << "\nPosiciones de 3 en el vector" << endl;
	for (auto i : r) cout << i << " ";//2 4 8
	return 0;
}