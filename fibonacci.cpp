//Serie fibonacci y número dorado
	
#include <iostream>
#include <cmath>
#include <iomanip>
#include<stdio.h>

using namespace std;

//declarar funcion
double fibonacci(int num);

//main
int main(){
    int num;

    do{
        cout << "Escriba la cantidad que desea que tenga la serie Fibonacci (Pulse 0 para salir): ";
        cin >> num;

        if (num > 0) {
            cout << endl<< "Serie de Fibonacci con " << num << " elementos: ";
            double num_aureo = fibonacci(num);
            cout << endl << "Numero aureo: " << fixed << setprecision(5) << num_aureo << endl << endl; //hasta 4 decimales
        }
    } while (num != 0);
    cout << endl<< "Vuelva pronto :)" << endl;

    return 0;
}

//funcion de algoritmo fibonacci
double fibonacci(int num){

    int fibo_1 = 0, fibo_2 = 1, aux;
    double num_aureo;

    if (num == 1){
        cout << "0";
        num_aureo = 1;
    }
    else if (num == 2){
        cout << "0, 1";
        num_aureo = 1;
    }
    else{
        cout << "0, 1, ";
        num_aureo = (1 + sqrt(5)) / 2; //formula numero de oro

        for (int i = 2; i < num; i++){ //algoritmo fibo
            aux = fibo_1 + fibo_2;
            fibo_1 = fibo_2;
            fibo_2 = aux;

            cout << aux << ", ";
        }
    }
    return num_aureo;
}
	

