
extern zend_class_entry *nc_storage_naming_storagenaminginterface_ce;

ZEPHIR_INIT_CLASS(Nc_Storage_Naming_StorageNamingInterface);

ZEPHIR_INIT_FUNCS(nc_storage_naming_storagenaminginterface_method_entry) {
	PHP_ABSTRACT_ME(Nc_Storage_Naming_StorageNamingInterface, generateName, NULL)
  PHP_FE_END
};
