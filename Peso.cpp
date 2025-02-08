#include <iostream>
using namespace std;
int main() {
 float peso, altura, bmi;
 
 cout << "Ingrese en kilogramos su peso: ";
 cin >> peso;
 
 cout << "Ingrese en metros su altura: ";
 cin >> altura;
 
 bmi = peso / (altura * altura);
 
 cout << "Su BMI es: " << bmi << endl;
 
 if (bmi < 18.5) {
 cout << "Usted se encuentra en la categoria de peso bajo." << endl;
 } else if (bmi >= 18.5 && bmi <= 24.9) {
 cout << "Usted se encuentra en la categoria de peso normal." << endl;
 } else if (bmi >= 25 && bmi <= 29.9) {
 cout << "Usted se encuentra en la categoria de sobrepeso." << endl;
 } else if (bmi >= 30) {
 cout << "Usted se encuentra en la categoria de obesidad." << endl;
 }
 return 0;
}