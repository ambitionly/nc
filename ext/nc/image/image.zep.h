
extern zend_class_entry *nc_image_image_ce;

ZEPHIR_INIT_CLASS(Nc_Image_Image);

PHP_METHOD(Nc_Image_Image, contentType);
PHP_METHOD(Nc_Image_Image, resize);
PHP_METHOD(Nc_Image_Image, crop);
PHP_METHOD(Nc_Image_Image, thumbnail);
PHP_METHOD(Nc_Image_Image, draw);
PHP_METHOD(Nc_Image_Image, drawTo);
PHP_METHOD(Nc_Image_Image, save);
PHP_METHOD(Nc_Image_Image, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_resize, 0, 0, 1)
	ZEND_ARG_INFO(0, width)
	ZEND_ARG_INFO(0, height)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_crop, 0, 0, 3)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, w)
	ZEND_ARG_INFO(0, h)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_thumbnail, 0, 0, 1)
	ZEND_ARG_INFO(0, width)
	ZEND_ARG_INFO(0, height)
	ZEND_ARG_INFO(0, cropped)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_draw, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, srcItem, Nc\\Image\\ImageAbstract, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_drawto, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, srcItem, Nc\\Image\\ImageAbstract, 0)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_image_image_save, 0, 0, 1)
	ZEND_ARG_INFO(0, destPath)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(nc_image_image_method_entry) {
	PHP_ME(Nc_Image_Image, contentType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, resize, arginfo_nc_image_image_resize, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, crop, arginfo_nc_image_image_crop, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, thumbnail, arginfo_nc_image_image_thumbnail, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, draw, arginfo_nc_image_image_draw, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, drawTo, arginfo_nc_image_image_drawto, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, save, arginfo_nc_image_image_save, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Image_Image, __toString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
