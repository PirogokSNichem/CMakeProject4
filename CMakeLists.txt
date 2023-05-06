# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)//указываем версию симейк

project ("CMakeProject4")

# Включите подпроекты.
add_subdirectory ("CMakeProject4")
add_subdirectory("inoutlib")

cmake_minimum_required (VERSION 3.8)

project("CMakeProject4")

include_directories("../inoutlib")

target_link_libraries(CMakeProject4 inoutlib)



cmake_minimum_required (VERSION 3.8)

project(inoutlib)//добавляем библиотеку

set(SOURCES
    read.cpp
    print.cpp
    inout.h
)

# Добавьте источник в исполняемый файл этого проекта.
add_library(inoutlib ${SOURCES})
add_executable (CM "inout.h")
add_executable (CMak "main.cpp")//указываем файлы
build 