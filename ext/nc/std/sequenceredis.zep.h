
extern zend_class_entry *nc_std_sequenceredis_ce;

ZEPHIR_INIT_CLASS(Nc_Std_SequenceRedis);

PHP_METHOD(Nc_Std_SequenceRedis, __construct);
PHP_METHOD(Nc_Std_SequenceRedis, getNextSequence);
PHP_METHOD(Nc_Std_SequenceRedis, restoreSequence);

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_std_sequenceredis___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, redis)
	ZEND_ARG_INFO(0, prefix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_std_sequenceredis_getnextsequence, 0, 0, 1)
	ZEND_ARG_INFO(0, identifier)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_std_sequenceredis_restoresequence, 0, 0, 2)
	ZEND_ARG_INFO(0, identifier)
	ZEND_ARG_INFO(0, sequence)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(nc_std_sequenceredis_method_entry) {
	PHP_ME(Nc_Std_SequenceRedis, __construct, arginfo_nc_std_sequenceredis___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Nc_Std_SequenceRedis, getNextSequence, arginfo_nc_std_sequenceredis_getnextsequence, ZEND_ACC_PUBLIC)
	PHP_ME(Nc_Std_SequenceRedis, restoreSequence, arginfo_nc_std_sequenceredis_restoresequence, ZEND_ACC_PUBLIC)
	PHP_FE_END
};