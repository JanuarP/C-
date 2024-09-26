#include "iostream"
using namespace std;

int main(){

    char op;
    float x, y;
    
    cout << "Enter Operator: +, -, *, / \n";
    cin >> op;

    cout << "Nilai x \n";
    cout << "Jawab\t: ";
    //Memberi nilai untuk variabel "x"
    cin >> x;

    cout << "Nilai y \n";
    cout << "Jawab\t: ";
    //Memberi nilai untuk variabel "y"
    cin >> y;

    switch (op)
    {
    case '+':
        cout << "hasil dari " << x << '+' << y << "=" << x + y;
        break;

    case '-':
        cout << "hasil dari  " << x << '-' << y << "=" << x - y;
        break;

    case '*':
        cout << "hasil dari  " << x << '*' << y << "=" << x * y;
        break;

    case '/':
        cout << "hasil dari " << x << '/' << y << "=" << x / y;
        break;
    }

    return 0;
}
