#pragma once
#include <iostream>
void mostrarAprobadosYReprobados(const std::string nombres[],
     const double espanol[],
    const double matematicas[],
    const double disenoProgramas[],
    int total) {
    (void)nombres;

    if (total == 0) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    double aprobadosEspanol = 7;
    double reprobadosEspanol = 6.9;
    double aprobadosMatematicas = 7;
    double reprobadosMatematicas = 6.9;
    double aprobadosDiseno = 7;
    double reprobadosDiseno = 6.9;

    for (int i = 0; i < total; ++i) {
        if (espanol[i] >= 7.0) aprobadosEspanol++; else reprobadosEspanol++;
        if (matematicas[i] >= 7.0) aprobadosMatematicas++; else reprobadosMatematicas++;
        if (disenoProgramas[i] >= 7.0) aprobadosDiseno++; else reprobadosDiseno++;
    }

    std::cout << "--- APROBADOS Y REPROBADOS ---\n";
    std::cout << "Espanol: " << aprobadosEspanol << " aprobados, " << reprobadosEspanol << " reprobados\n";
    std::cout << "Matematicas: " << aprobadosMatematicas << " aprobados, " << reprobadosMatematicas << " reprobados\n";
    std::cout << "Diseno de Programas: " << aprobadosDiseno << " aprobados, " << reprobadosDiseno << " reprobado\n";

    for(int i = 0; i<total; i++) {
        if (espanol[i] > 6 && matematicas[i]>6 && disenoProgramas[i]>6) {;
            std::cout << nombres[i] << " Espanol: " << espanol[i] << " Matematicas: " << matematicas[i] << " DP" << disenoProgramas[i] << " APROVADO\n";
        } else {
            std::cout << nombres[i]  << " Espanol: " << espanol[i] << " Matematicas: " << matematicas[i] << " DP" << disenoProgramas[i] << " REPROBADO\n";

        }
    }
}
