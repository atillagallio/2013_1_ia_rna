#include "neuronio.h"

Neuronio::Neuronio()
{
	
}

Neuronio::~Neuronio()
{
	delete _entradas;
	delete _pesos;
}

float
Neuronio::soma()
{
	float soma = 0;
	
	for (int i = 0; i < _numeroEntradas; ++i)
	{
		soma += (_entradas[i] * _pesos[i]);
	}

	return soma;
}

void
Neuronio::treinamento(float saidaDesejada)
{
	float resultadoObtido = soma();
	for (int i = 0; i < _numeroEntradas; ++i)
	{
		_pesos[i] += (_taxaAprendizagem * (_entradas[i]) * (saidaDesejada - resultadoObtido));
	}
}

int _numeroEntradas;
int* _entradas;

float* _pesos;
float _taxaAprendizagem;
float _erro;
