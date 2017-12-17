#include <iostream>


using namespace std;


//function prototypes here:

int getInteger (int x);
char getOperation ();
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

typedef int (*arithmeticFcn)(int, int);
arithmeticFcn getArithmeticFunction(char op);

int main ()
{
    int int1 = getInteger(int1);
    char op = getOperation ();
    int int2 = getInteger(int2);



    arithmeticFcn fcn = getArithmeticFunction(op);
    cout << int1 << ' ' << op << ' ' << int2 << " = " << fcn(int1, int2) << '\n';

    return 0;
}


int getInteger (int x)
{
    cout << "Select an integer\n";
    cin >> x;
    return x;
}


char getOperation ( )
{
    char op;
    do
    {
        cout << "Select an operation ('+', '-', '*', '/'):.\n";
        cin >> op;

    } while (!(op == '+' || op == '-' || op == '*' || op == '/'));

    return op;
}


int add(int x, int y)
{
    return x + y;
}

int subtract (int x, int y)
{
    return x - y;
}

int multiply (int x, int y)
{
    return x * y;
}

int divide (int x, int y)
{
    return x / y;
}

arithmeticFcn getArithmeticFunction(char op)
{
	switch (op)
	{
	default: // default will be to add
	case '+': return add;
	case '-': return subtract;
	case '*': return multiply;
	case '/': return divide;
	}
}
