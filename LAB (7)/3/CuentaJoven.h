#pragma once
#include "Cuenta.h"
class CuentaJoven: private Cuenta{
	public:
		CuentaJoven(string);
		~CuentaJoven();
		void imprimir();
};