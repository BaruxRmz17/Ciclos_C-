// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int aciertos = 0;
    int incorrectas = 0;
    int preguntas = 0;
    int intentos = 0;
    
    while( preguntas != 4){
        intentos ++;
        string p1;
        cout<<"Quien escribio el pacinete " <<endl;
        getline(cin,p1);/*Getline nos ayuda a almacenar el dato de entrada en la variable a diferencia de usar "cin>>" que solo captura una palabra hasta  el primer espacio*/
        if(p1 == "Alfredo Olivas" || p1 == "alfredo olivas"){
            aciertos ++;
            cout<<"Felicidades respuesta correcta." << aciertos <<endl;
            preguntas ++;
        }
        else{
            cout<<"Respuesta incorrecta"<<endl;
            preguntas = 0;
        }
        
        
        int p2;
        cout<<"Cuantos años cumple el paciente en 2025"<<endl;
        cin>>p2;
        cin.ignore();
        if(p2 == 10){
            aciertos ++;
            cout<<"Felicidades respuesta correcta." << aciertos <<endl;
            preguntas ++;
        }
        else{
            cout<<"Respuesta incorrecta"<<endl;
            preguntas -= 1;
        }
        
        

        int p3;
        cout<<"En que año fue grabada con la novedad de alfredo olivas "<<endl;
        cin>>p3;
        cin.ignore();
        if(p3 == 2012){
            aciertos ++;
            cout<<"Felicidades respuesta correcta." << aciertos <<endl;
            preguntas ++;
        }
        else{
            cout<<"Respuesta incorrecta"<<endl;
            preguntas -= 1;
        }
        
        
        string p4;
        cout<<"Que canciones de alfredo olivas fue grabado en el palenque de Ags "<<endl;
        cin>>p4;
        cin.ignore();
        if(p4 == "no" || p4 == "No" || p4 == "NO"){
            aciertos ++;
            cout<<"Felicidades respuesta correcta." << aciertos <<endl;
            preguntas ++;
        }
        else{
            cout<<"Respuesta incorrecta"<<endl;
            preguntas -= 1;
        }
        
        
        
    }
    
    cout << "Tus resultados son:" << endl;
    cout << "Aciertos: " << preguntas << endl;
    cout << "Incorrectas: " << incorrectas << endl;
    cout << "Número de intentos: " << intentos << endl;
    return 0;
}