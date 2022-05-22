#pragma once
//ProductoBancario.h
class ProductoBancario
{
	protected:
		string cliente;
		double saldo;
		int numProductos{0};
	public:
		ProductoBancario();
		~ProductoBancario();
		void imprimir();
};