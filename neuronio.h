#ifndef NEURONIO_H
#define NEURONIO_H 

class Neuronio
{
public:
	Neuronio(int numeroEntradas, float taxaAprendizagem = 0.6);
	~Neuronio();

	void treinamento();

private:
	float soma();

	int* _entradas;
	int saida;

	float* _pesos;
	float _erro;
};

#endif