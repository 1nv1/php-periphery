PHP_ARG_ENABLE(periphery, [ ], [ --enable-periphery   Enable periphery wrapper ])

if test "$PHP_PERIPHERY" != "no"; then
PHP_NEW_EXTENSION(periphery, src/php_periphery.c, $ext_shared)
fi
