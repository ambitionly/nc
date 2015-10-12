
extern zend_class_entry *nc_storage_storageawareinterface_ce;

ZEPHIR_INIT_CLASS(Nc_Storage_StorageAwareInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_storage_storageawareinterface_setstorage, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, storage, Nc\\Storage\\StorageInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(nc_storage_storageawareinterface_method_entry) {
	PHP_ABSTRACT_ME(Nc_Storage_StorageAwareInterface, setStorage, arginfo_nc_storage_storageawareinterface_setstorage)
	PHP_ABSTRACT_ME(Nc_Storage_StorageAwareInterface, getStorage, NULL)
	PHP_FE_END
};