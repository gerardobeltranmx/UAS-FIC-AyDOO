#include <iostream>

using namespace std;

int main()
{
    int examen, asistencia, tareas, calificacion;
    
    //cout << "Examen: ";
    cin >> examen;
    
    //cout << "Asistencia: ";
    cin >> asistencia;
    
    //cout << "Tareas: ";
    cin >> tareas;
    
    // cin >> examen >> asistencia >> tareas;
    

    calificacion = 0.60 * examen + 0.20 * asistencia + 0.20 * tareas;
    

    cout<< calificacion << endl;

    return 0;
}
