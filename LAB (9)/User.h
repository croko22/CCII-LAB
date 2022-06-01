//User.h
#pragma once
#include "iostream"
using namespace std;

template <class T,class U>
class User {
	private:
	T x;
	U y;
	public:
	User(T x = 0, U y = 0);
	T getX() const { return x;}
	U getY() const { return y;}
	string correo(){
		return x+y+"@unsa.edu.pe";
	}
};
template <class T,class U>
User<T,U>::User(T x, U y) {
	this->x = x;
	this->y = y;
}