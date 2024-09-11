# Hall Sensor Serial Reader

A small Raspberry Pi Pico project to read hall sensor values and print to stdio (UART0).

## Dependancies

Ensure you have the PiPico-SDK submodule included in this project, this can be done by running
```
git submodule update --init
```
and ensure you have the dependancies required by the PiPico-SDK [here](https://github.com/raspberrypi/pico-sdk)

## Building

This project is built with cmake, to build the project ensure you have cmake installed and run the following
```
cmake -Bbuild .
cmake --build build
```
