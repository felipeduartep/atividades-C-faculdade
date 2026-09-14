cmake_minimum_required(VERSION 4.3)
project(atvidadesFaculdade)

set(CMAKE_CXX_STANDARD 20)

add_executable(volumeCilindro atividadesLista01/01_volumeCilindro.cpp)
add_executable(patosEcoelhos atividadesLista01/02_patosEcoelhos.cpp)
add_executable(encanador atividadesLista01/03_encanador.cpp)
add_executable(2numeros atividadesLista01/04_valores2numeros.cpp
        "Exemplos Aulas/while.cpp"
        "Exemplos Aulas/Divisor.cpp"
        "Exemplos Aulas/Arrays.cpp")
add_executable(conversorTemperatura atividadesLista01/05_converterTemperatura.cpp)
add_executable(trocarValores atividadesLista01/06_trocaValores.cpp)
add_executable(ordemCrescente "Exemplos Aulas/ordemCrescente.cpp")
add_executable(xuxa "Exemplos Aulas/musicaXuxa.cpp")
add_executable(while "Exemplos Aulas/while.cpp")
add_executable(divisor "Exemplos Aulas/Divisor.cpp")
add_executable(array "Exemplos Aulas/Arrays.cpp"
        "Exemplos Aulas/Arrays02.cpp")