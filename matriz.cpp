#include <iostream>
#include "matriz.h"

using namespace std;
/*
template <typename M>
Matriz<M>::Matriz(int f, int c, M min)
	{
		mat=new M*[fila];
		fila=f;
		columna=c;
		minimo=min;
		crear_matriz();
		llenar_matriz_defecto(min);
		suma=min;
		s=min;
		imprimir_f=min;
		imprimir_c=min;		
	}
template <typename M>
M Matriz<M>::entrada()
	{
		M a;
		cin>>a;
		return a;
	}
template <typename M>	
void Matriz<M>::crear_matriz()
	{
		for(int i=0;i<fila;i++)
		{
			*(mat+i)=new int[columna];    
		}
		
	}
//Esta funion sirve para hacer el llenado de las matrices , con lo numeros que el usuaro dicte 	
template <typename M>
void Matriz<M>::llenar_matriz_defecto(M a)
	{
		for(int i=0;i<fila;i++)
		{
		    for(int j=0;j<columna;j++)
		    {
		        *(*(mat+i)+j)=a;
		    }
		}
	}	
//Esta funion sirve para hacer el llenado de las matrices , con lo numeros que el usuaro dicte 		
template <typename M>
void Matriz<M>::llenar_matriz()
	{
		for(int i=0;i<fila;i++)
		{
		    for(int j=0;j<columna;j++)
		    {
		        cout<<i<<j<<" entrar:\n";
		        *(*(mat+i)+j)=entrada();
		    }
		}
	}
template <typename M>
void Matriz<M>::sumar_matriz()
	{
		for(int i=0;i<fila;i++)
		{
		    for(int j=0;j<columna;j++)
		    {
		        suma+=*(*(mat+i)+j);
		    }
		}
	}
template <typename M>		
void Matriz<M>::imprimir_matriz()
	{
		for(int i=0;i<fila;i++)
		{
		    for(int j=0;j<columna;j++)
		    {
		        cout<<"  "<<*(*(mat+i)+j);
		    }
		    cout<<"\n";
		}
	}
template <typename M>
Matriz<M> Matriz<M>::operator+(const Matriz<M> mat2)
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]=this->mat[i][j]+mat2.mat[i][j];
			}
		}
		return mat0;
	}
template <typename M>
Matriz<M> Matriz<M>::operator-(const Matriz<M> mat2)
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]=this->mat[i][j]-mat2.mat[i][j];
			}
		}
		return mat0;
	}
template <typename M>
Matriz<M> Matriz<M>::operator/(const Matriz<M> mat2)
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]=(this->mat[i][j])/(mat2.mat[i][j]);
			}
		}
		return mat0;
	}
template <typename M>
Matriz<M> Matriz<M>::operator*(const Matriz<M> mat2)
	{
		Matriz mat0(fila,mat2.columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < mat2.columna; j += 1)
			{
				for (int k = 0; k < columna; k += 1)
				{
					s+=(this->mat[i][k])*(mat2.mat[k][j]);
				}
			mat0.mat[i][j]=s;	
			s=minimo;	
			}
		}
		return mat0;
	}	
template <typename M>	
Matriz<M> Matriz<M>::operator=(const Matriz<M> mat2)
	{
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				this->mat[i][j]=mat2.mat[i][j];
			}
		}
	}	
template <typename M>
ostream& Matriz<M>::operator<<( ostream &output) { 
         
         output << "EL DATO EN:: "<<imprimir_f <<","<< imprimir_c <<"-> "<< mat[imprimir_f][imprimir_c]<<"\n";
         return output;            
      }
template <typename M>
istream& Matriz<M>::operator>>( istream  &input ) { 
         input >> mat[imprimir_f][imprimir_c];
         return input;            
      }      	
template <typename M>
Matriz<M> Matriz<M>::operator>(const Matriz<M> mat2)
	{
		if ((this->suma)>(mat2.suma)){
			return true;}else{
			return false;}
	}	
template <typename M>
Matriz<M> Matriz<M>::operator<(const Matriz<M> mat2)
	{
		if ((this->suma)<(mat2.suma)){
			return true;}else{
			return false;}
	}
template <typename M>
Matriz<M> Matriz<M>::operator<=(const Matriz<M> mat2)
	{
		if ((this->suma)<=(mat2.suma)){
			return true;}else{
			return false;}
	}
template <typename M>
Matriz<M> Matriz<M>::operator>=(const Matriz<M> mat2)
	{
		if ((this->suma)>=(mat2.suma)){
			return true;}else{
			return false;}
	}				
template <typename M>
Matriz<M> Matriz<M>::operator- ()
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]= -(this->mat[i][j]);
			}
		}
		return mat0;
	}
template <typename M>
Matriz<M> Matriz<M>::operator! ()
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]= !(this->mat[i][j]);
			}
		}
		return mat0;
	}
			
template <typename M>
Matriz<M> Matriz<M>::operator++ ()
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]= ++(this->mat[i][j]);
			}
		}
		return mat0;
	}
template <typename M>
Matriz<M> Matriz<M>::operator-- ()
	{
		Matriz mat0(fila,columna,minimo);
		for (int  i = 0; i < fila; i += 1)
		{
			for (int j = 0; j < columna; j += 1)
			{
				mat0.mat[i][j]= --(this->mat[i][j]);
			}
		}
		return mat0;
	}
template <typename M>				
Matriz<M>::~Matriz()
	{
		for(int i=0;i<fila;i++)
		{
			 delete[] *(mat+i);    
		}
		delete[] *mat;	

	}	
 */

