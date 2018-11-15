#include "calculator.h"

//Bondarenko Julia
//IO - 04
//AK-2
//Lab-2
//uliabondarenko48@gmail.com

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
