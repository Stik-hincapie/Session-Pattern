/**************************************
Name: Alquiler de automoviles
Author: Juan Jose Diaz Acevedo, Juan Esteban Ramirez Giraldo and Johan Stik Hincapie Marin
Date: Thursday 18 of November of the 2021
Compiled in: Dev C++

**************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
    float km_rc;
	int mont_pay, mont_impuesto, mont_f;
    cout << "\t ****Bienvenidos a AlquiCarros S.A.S****";
    cout << "\n \n Ingresa el valor de km de recorrido: \t";
    cin >> km_rc;
    mont_f=1300000;
    if (km_rc>0){
		if(km_rc<=300){
			mont_pay=mont_f;
		}else{
    		if(km_rc>300 && km_rc<=1000){
    			mont_pay=mont_f+((km_rc-300)*50000);
    		}else{
    			if (km_rc>1000){
    				mont_pay=mont_f+700*50000+((km_rc-1000)*100000);	
				}
			}
		}
    	mont_impuesto=mont_pay*0.2;
    	cout << "\n \n Valor de monto a pagar: \t" << mont_pay << endl;
    	cout << "\n Valor de impuesto: \t \t" << mont_impuesto << endl;
    	mont_pay=mont_pay+mont_impuesto;
    	cout << "\n Valor de monto total a pagar: \t" << mont_pay << endl;
	}else{
		cout << "\n \n ****El kilometraje ingresado es igual o menor a 0, por tanto no se puede obtener un valor a pagar****";
		cout << "\n ****Por favor intente nuevamente a ingresar un valor valido****\t";
	}
    
    return 0;
}
