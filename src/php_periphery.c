/*
 * php-periphery by Nelson Lombardo
 * https://github.com/1nv1/php-periphery
 * License: MIT
 */

#include <php.h>

#include <time.h>
#include <unistd.h>

#include "php_periphery.h"

zend_function_entry periphery_functions[] = {
  PHP_FE(periphery_sleep_ms, NULL)
  PHP_FE(periphery_version, NULL)
  PHP_FE(periphery_open, NULL)
  PHP_FE_END
};

zend_module_entry periphery_module_entry = {
  STANDARD_MODULE_HEADER,
  PHP_PERIPHERY_EXTNAME,
  periphery_functions,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  PHP_PERIPHERY_VERSION,
  STANDARD_MODULE_PROPERTIES,
};

ZEND_GET_MODULE(periphery);

PHP_FUNCTION(periphery_sleep_ms)
{
  long int ret;
  unsigned int duration;
  struct timespec ts;

  if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "d", &duration) == FAILURE) {
    RETURN_NULL();
  }
  ret = 0;
  ts.tv_sec = duration / 1000;
  ts.tv_nsec = (duration - ts.tv_sec*1000)*1000000;
  nanosleep(&ts, NULL);

  RETVAL_LONG(ret);
}

PHP_FUNCTION(periphery_version)
{
  RETVAL_STRING(PHP_PERIPHERY_VERSION);
}

PHP_FUNCTION(periphery_open)
{
  char *device_str;
  int device_len;
  long ret;
  ret = 1;

  if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &device_str, &device_len) == FAILURE) {
    RETURN_NULL();
  }

  RETVAL_LONG(ret);
}
