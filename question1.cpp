#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int findThrees(vector <int> lista){
	int sum = 0;
    int num;
	for (int i = 0; i < lista.size(); i++){
		num = lista[i];

		if(num % 3 == 0)
		{
			sum = sum + num;
		}
	}
	return sum;
}

int main(){
	vector <int> lista;
	int num;
	cout<<"Dame los numeros del vector, cuando acabes pon -1: "<< endl;
	cin>>num;

	while(num != -1)
	{
		lista.push_back(num);
		cin>>num;
	}

	cout<<"El vector es: "<< endl;
	for (int i = 0; i < lista.size(); i++)
	{
		cout << lista[i] << " " ;
	}
		cout << "" << endl;


	int total = findThrees(lista);
	cout << "La suma de los divisibles por 3 es: " << total << endl;
	return 0;
}