# Hall Sensor Serial Reader

A small Raspberry Pi Pico project to read hall sensor values and print to stdio (UART0).

## Dependancies

Ensure you have the PiPico-SDK submodule included in this project, this can be done by running
```
git submodule update --init
```
and ensure you have the dependancies required by the PiPico-SDK [here](https://github.com/raspberrypi/pico-sdk).

## Building

This project is built with cmake, to build the project ensure you have cmake installed and run the following
```
cmake -Bbuild .
cmake --build build
```

## Testing

To read from a CP2102 connected to the PiPico, you can use `picocom`, a small cli based serial reader
```
picocom -b 115200 /dev/ttyUSB0
```
adjusting `ttyUSB0` to match the CP2102 device in use.
