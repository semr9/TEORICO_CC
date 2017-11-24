#include <iostream>
#include "matriz.h"

using namespace std;


int main()
{
    Matriz<int> mat_1(3,3,0);
    Matriz<int> mat_2(3,3,0);
    Matriz<int> mat_3(3,3,0);
	
	mat_1.llenar_matriz();
	mat_2.llenar_matriz();
   	
   	cout<<"primero_matriz\n"; 
    mat_1.imprimir_matriz();
    cout<<"segunda_matriz\n"; 
    mat_2.imprimir_matriz();
    cout<<"matriz que iguala\n"; 
    mat_3.imprimir_matriz();
   
    cout<<"inicio_de_operaciones\n";
    cout<<"\n";
    cout<<"SUMA::\n";
    mat_3 = mat_1+mat_2;
    mat_3.imprimir_matriz();
    cout<<"\n";
    cout<<"RESTA::\n";
    mat_3=mat_1-mat_2;
    mat_3.imprimir_matriz();
    cout<<"\n";
    cout<<"DIVISION::\n";
    mat_3=mat_1/mat_2;
    mat_3.imprimir_matriz();
    cout<<"FIN\n";
    mat_3=mat_1*mat_2;
    cout<<"\n";
   
    return 0;
}


