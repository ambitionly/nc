
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Nc_Upload_UriGeneratorInterface) {

	ZEPHIR_REGISTER_INTERFACE(Nc\\Upload, UriGeneratorInterface, nc, upload_urigeneratorinterface, nc_upload_urigeneratorinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Nc_Upload_UriGeneratorInterface, generateUri);

