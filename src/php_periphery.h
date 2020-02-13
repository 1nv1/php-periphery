/*
 * php-periphery by Nelson Lombardo
 * https://github.com/1nv1/php-periphery
 * License: MIT
 */

#ifndef _PHP_PERIPHERY_H_
#define _PHP_PERIPHERY_H_

#include <c-periphery/src/version.h>

#define _STRINGIFY(x)         #x
#define STRINGIFY(x)          _STRINGIFY(x)

#define PHP_PERIPHERY_VERSION STRINGIFY(PERIPHERY_VERSION_MAJOR) "." \
                              STRINGIFY(PERIPHERY_VERSION_MINOR) "." \
                              STRINGIFY(PERIPHERY_VERSION_PATCH)

#define PHP_PERIPHERY_EXTNAME "periphery"

PHP_FUNCTION(periphery_sleep_ms);
PHP_FUNCTION(periphery_version);
PHP_FUNCTION(periphery_open);

#endif
