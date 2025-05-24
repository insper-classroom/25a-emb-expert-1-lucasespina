# CMakeLists.txt para a biblioteca MPU6050
cmake_minimum_required(VERSION 3.13)

# Definir a biblioteca
add_library(mpu6050
    mpu6050.c
)

# Incluir diretórios de cabeçalho
target_include_directories(mpu6050 PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Linkar com as dependências necessárias
target_link_libraries(mpu6050 
    hardware_i2c 
    pico_stdlib
)