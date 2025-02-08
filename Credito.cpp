#include <iostream>
using namespace std;
int main() {
 int cuentaNum;
 float saldoInicial, cargos, creditos, limiteCredito, nuevoSaldo;
 cout << "Ingrese el numero de su cuenta bancaria: ";
 cin >> cuentaNum;
 cout << "Ingrese el saldo inicial del mes: ";
 cin >> saldoInicial;
 cout << "Ingrese el total de cargos aplicados en el mes: ";
 cin >> cargos;
 cout << "Ingrese el total de creditos aplicados en el mes: ";
 cin >> creditos;
 cout << "Ingrese el limite de credito permitido: ";
 cin >> limiteCredito;
 nuevoSaldo = saldoInicial + cargos - creditos;
 cout << "El nuevo saldo es: " << nuevoSaldo << endl;
 if (nuevoSaldo > limiteCredito) {
 cout << "Se ha excedido el limite de su credito." << endl;
 } else {
 cout << "No se ha excedido el limite de su credito." << endl;
 }
 return 0;
}