#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    string apellido;
    int edad;
    int notas[5];
};

struct Profesor {
    string nombre;
    string apellido;
    string materia;
};

struct Curso {
    string nombre;
    string profesor;
    int capacidad;
    int inscritos;
};

Estudiante estudiantes[100];
Profesor profesores[50];
Curso cursos[20];

int numEstudiantes = 0;
int numProfesores = 0;
int numCursos = 0;

void registrarEstudiante();
void consultarEstudiante();
void registrarProfesor();
void consultarProfesor();
void registrarCurso();
void consultarCurso();
void inscribirEstudiante();
void consultarNotas();

int main() {
    int opcion;
    do {
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Consultar estudiante" << endl;
        cout << "3. Registrar profesor" << endl;
        cout << "4. Consultar profesor" << endl;
        cout << "5. Registrar curso" << endl;
        cout << "6. Consultar curso" << endl;
        cout << "7. Inscribir estudiante a curso" << endl;
        cout << "8. Consultar notas de estudiante" << endl;
        cout << "9. Salir" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarEstudiante();
                break;
            case 2:
                consultarEstudiante();
                break;
            case 3:
                registrarProfesor();
                break;
            case 4:
                consultarProfesor();
                break;
            case 5:
                registrarCurso();
                break;
            case 6:
                consultarCurso();
                break;
            case 7:
                inscribirEstudiante();
                break;
            case 8:
                consultarNotas();
                break;
        }
    } while (opcion != 9);
    return 0;
}

void registrarEstudiante() {
    cout << "Ingrese nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Ingrese apellido: ";
    string apellido;
    cin >> apellido;
    cout << "Ingrese edad: ";
    int edad;
    cin >> edad;
    estudiantes[numEstudiantes].nombre = nombre;
    estudiantes[numEstudiantes].apellido = apellido;
    estudiantes[numEstudiantes].edad = edad;
    numEstudiantes++;
}

void consultarEstudiante() {
    cout << "Ingrese nombre del estudiante: ";
    string nombre;
    cin >> nombre;
    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].nombre == nombre) {
            cout << "Apellido: " << estudiantes[i].apellido << endl;
            cout << "Edad: " << estudiantes[i].edad << endl;
            return;
        }
    }
    cout << "Estudiante no encontrado" << endl;
}

void registrarProfesor() {
    cout << "Ingrese nombre: ";
    string nombre;
    cin >> nombre;
    cout << "Ingrese apellido: ";
    string apellido;
    cin >> apellido;
    cout << "Ingrese materia: ";
    string materia;
    cin >> materia;
    profesores[numProfesores].nombre = nombre;
    profesores[numProfesores].apellido = apellido;
    profesores[numProfesores].materia = materia;
    numProfesores++;
}

void consultarProfesor() {
    cout << "Ingrese nombre del profesor: ";
    string nombre;
    cin >> nombre;
    for (int i = 0; i < numProfesores; i++) {
        if (profesores[i].nombre == nombre) {
            cout << "Apellido: " << profesores[i].apellido << endl;
            cout << "Materia: " << profesores[i].materia << endl;
            return;
        }
    }
    cout << "Profesor no encontrado" << endl;
}

void registrarCurso() {
    cout << "Ingrese nombre del curso: ";
    string nombre;
    cin >> nombre;
    cout << "Ingrese profesor: ";
    string profesor;
    cin >> profesor;
    cout << "Ingrese capacidad: ";
    int capacidad;
    cin >> capacidad;
    cursos[numCursos].nombre = nombre;
    cursos[numCursos].profesor = profesor;
    cursos[numCursos].capacidad = capacidad;
    cursos[numCursos].inscritos = 0;
    numCursos++;
