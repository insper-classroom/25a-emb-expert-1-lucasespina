add_executable(main
        main.c
)

target_link_libraries(main pico_stdlib freertos)
pico_add_extra_outputs(main)

# No seu executável principal, linkar com a biblioteca
target_link_libraries(seu_executavel_principal 
pico_stdlib
mpu6050  # <- Sua nova biblioteca
)