#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
	Shape* soyUnaFigura = new Square(2.0);
	Shape* soyTriangulo = new Triangle(6.0,3.0);

	double resultado = soyUnaFigura->calculateArea();	
	double resultadoTriangulo = soyTriangulo->calculateArea();

    std::cout << "Hola, el area de un cuadrado de base 2 es!\n";
	std::cout << resultado;
	std::cout << "\n \n \n \n \n";

	std::cout << "Hola, el area de un triangulo de base 6 y 3 es!\n";
	std::cout << resultadoTriangulo;
	std::cout << "\n \n \n \n \n ";
}


