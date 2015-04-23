#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int dotProduct(vector <int> lista1, vector <int> lista2)
{
int product = 0;
	for(int i = 0; i < lista1.size(); i++){
		product += ( lista1[i] * lista2[i] );
	}
	return product;
}

int main(){
int num1, num2, tam1, tam2;
vector <int> lista1;
vector <int> lista2;

cout << "Acontinuacion pon las dos listas para sacar el producto escalar."<< endl;
cout << "Pero ambas tienen que tener la misma cantidad de numeros." << endl;

cout << "Dame los numeros de la primera lista, cuando acabes pon -1" << endl;
cin >> num1;
	do
	{
		lista1.push_back(num1);
		cin >> num1;
	}
	while(num1 != -1);
		tam1 = lista1.size();

cout << "Dame los numeros de la segunda lista, cuando acabes pon -1" << endl;
cin >> num2;
	do
	{
		lista2.push_back(num2);
		cin >> num2;
	}
	while(num2 != -1);
		tam2 = lista2.size();

	if(tam1 != tam2){
		cout << "Algo esta mal: Las listas no son de tamaños iguales";
		return -1;
		}
		else
		{
			cout << "El producto escalar es: " << dotProduct(lista1, lista2) << endl;
		}
		
	return 0;
}