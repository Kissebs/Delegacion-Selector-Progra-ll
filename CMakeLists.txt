cmake_minimum_required(VERSION 3.27)
project(Delegacion_Selector_Progra_ll)

set(CMAKE_CXX_STANDARD 14)

include_directories("Delegacion Selector/Delegacion Selector")

add_executable(Delegacion_Selector_Progra_ll
        "Delegacion Selector/Delegacion Selector/Contenedor.h"
        "Delegacion Selector/Delegacion Selector/main.cpp"
        "Delegacion Selector/Delegacion Selector/Persona.h"
        "Delegacion Selector/Delegacion Selector/SEdades.h"
        "Delegacion Selector/Delegacion Selector/Selector.h"
        "Delegacion Selector/Delegacion Selector/SEstatura.h"
        "Delegacion Selector/Delegacion Selector/SIndiceMasaCorporal.h"
        "Delegacion Selector/Delegacion Selector/SLugar.h"
        "Delegacion Selector/Delegacion Selector/SPeso.h")
