cmake_minimum_required(VERSION 3.13)

include(pico-sdk/pico_sdk_init.cmake)

project(HallSensor)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

pico_sdk_init()

add_executable(sensor)
add_subdirectory(src)

target_include_directories(sensor PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src /usr/arm-none-eabi/include)
target_link_libraries(sensor pico_stdlib hardware_gpio hardware_adc pico_stdio_uart)

pico_add_extra_outputs(sensor)
pico_enable_stdio_usb(sensor 0)
pico_enable_stdio_uart(sensor 1)

add_custom_target(flash ALL ${CMAKE_SOURCE_DIR}/pi_flash.sh
    DEPENDS sensor)
