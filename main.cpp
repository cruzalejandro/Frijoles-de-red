# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Ingresa Operador:   ";
    cin >> op;

    cout << "Ingresa Factores: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // si no esta bien escrito o no tiene coherencia saldra este mensaje
            cout << "Algo Salio Mal , Vuelva a Intentarlo";
            break;
    }

    return 0;
}