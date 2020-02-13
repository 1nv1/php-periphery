# php-periphery

A php extension for peripheral I/O (GPIO, LED, PWM, SPI, I2C, MMIO, Serial) in
GNU/Linux.

## Introduction

The goal of this project is build a wrapper of [c-periphery](https://github.com/vsergeev/c-periphery)
library.

## Warning

This project really has two goal, the first is create a wrapper and the second
is learn about php extensions. It's my first project around this.

# Build

You need apply the following steps:

```
# phpize
# ./configure --enable-periphery
# make
# make install
```

# License

php-periphery is MIT licensed. See the included [LICENSE](LICENSE) file.
