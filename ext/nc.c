
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "nc.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/globals.h"
#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *nc_factory_factoryinterface_ce;
zend_class_entry *nc_view_viewinterface_ce;
zend_class_entry *nc_db_dbinterface_ce;
zend_class_entry *nc_logger_loggerinterface_ce;
zend_class_entry *nc_std_groupedinterface_ce;
zend_class_entry *nc_std_sequenceinterface_ce;
zend_class_entry *nc_std_cacheinterface_ce;
zend_class_entry *nc_std_queueinterface_ce;
zend_class_entry *nc_std_ratelimiterinterface_ce;
zend_class_entry *nc_task_taskexecutorinterface_ce;
zend_class_entry *nc_exception_ce;
zend_class_entry *nc_factory_factoryabstract_ce;
zend_class_entry *nc_db_dbabstract_ce;
zend_class_entry *nc_logger_loggerabstract_ce;
zend_class_entry *nc_db_exception_ce;
zend_class_entry *nc_factory_classnameabstract_ce;
zend_class_entry *nc_image_imageabstract_ce;
zend_class_entry *nc_storage_storageabstract_ce;
zend_class_entry *nc_application_controllerabstract_ce;
zend_class_entry *nc_application_exception_ce;
zend_class_entry *nc_db_pdoabstract_ce;
zend_class_entry *nc_image_imagebackendabstract_ce;
zend_class_entry *nc_loader_loaderabstract_ce;
zend_class_entry *nc_router_routerabstract_ce;
zend_class_entry *nc_task_taskmanagerabstract_ce;
zend_class_entry *nc_factory_prefixed_ce;
zend_class_entry *nc_image_image_ce;
zend_class_entry *nc_router_exception_ce;
zend_class_entry *nc_std_groupedredishash_ce;
zend_class_entry *nc_application_controllerabstractcli_ce;
zend_class_entry *nc_application_controllerabstracthttp_ce;
zend_class_entry *nc_application_notfoundexception_ce;
zend_class_entry *nc_application_uploadedfile_ce;
zend_class_entry *nc_application_uploader_ce;
zend_class_entry *nc_application_uploaderexception_ce;
zend_class_entry *nc_db_collection_ce;
zend_class_entry *nc_db_entity_ce;
zend_class_entry *nc_db_model_ce;
zend_class_entry *nc_db_modelexception_ce;
zend_class_entry *nc_db_oci8_ce;
zend_class_entry *nc_db_pdomysql_ce;
zend_class_entry *nc_db_pdopgsql_ce;
zend_class_entry *nc_db_queryexception_ce;
zend_class_entry *nc_db_transactionexception_ce;
zend_class_entry *nc_factory_classnameclosure_ce;
zend_class_entry *nc_factory_di_ce;
zend_class_entry *nc_factory_exception_ce;
zend_class_entry *nc_factory_factories_ce;
zend_class_entry *nc_factory_namespaced_ce;
zend_class_entry *nc_image_captcha_ce;
zend_class_entry *nc_image_exception_ce;
zend_class_entry *nc_image_gd_ce;
zend_class_entry *nc_image_imagick_ce;
zend_class_entry *nc_image_text_ce;
zend_class_entry *nc_loader_exception_ce;
zend_class_entry *nc_loader_namepath_ce;
zend_class_entry *nc_loader_namespacedirectory_ce;
zend_class_entry *nc_logger_exception_ce;
zend_class_entry *nc_logger_file_ce;
zend_class_entry *nc_logger_loggerclosure_ce;
zend_class_entry *nc_logger_loggers_ce;
zend_class_entry *nc_logger_nil_ce;
zend_class_entry *nc_netutils_exception_ce;
zend_class_entry *nc_netutils_smtpmailer_ce;
zend_class_entry *nc_netutils_tcpsocketclient_ce;
zend_class_entry *nc_router_action_ce;
zend_class_entry *nc_router_controlleraction_ce;
zend_class_entry *nc_router_notfoundexception_ce;
zend_class_entry *nc_std_cacheapc_ce;
zend_class_entry *nc_std_cachefilesystem_ce;
zend_class_entry *nc_std_ce;
zend_class_entry *nc_std_exception_ce;
zend_class_entry *nc_std_groupedmongocollections_ce;
zend_class_entry *nc_std_groupedproxy_ce;
zend_class_entry *nc_std_groupedredishashserialized_ce;
zend_class_entry *nc_std_queueredis_ce;
zend_class_entry *nc_std_ratelimiterredis_ce;
zend_class_entry *nc_std_sequencemongocollection_ce;
zend_class_entry *nc_std_sequencemysql_ce;
zend_class_entry *nc_std_sequenceredis_ce;
zend_class_entry *nc_std_sequenceredishash_ce;
zend_class_entry *nc_storage_exception_ce;
zend_class_entry *nc_storage_fastdfs_ce;
zend_class_entry *nc_storage_filesystem_ce;
zend_class_entry *nc_storage_ftp_ce;
zend_class_entry *nc_task_exception_ce;
zend_class_entry *nc_task_queueredis_ce;
zend_class_entry *nc_task_rundirectly_ce;
zend_class_entry *nc_view_content_ce;
zend_class_entry *nc_view_exception_ce;
zend_class_entry *nc_view_facade_ce;
zend_class_entry *nc_view_httpresponse_ce;
zend_class_entry *nc_view_json_ce;
zend_class_entry *nc_view_nil_ce;
zend_class_entry *nc_view_readfile_ce;
zend_class_entry *nc_view_redirect_ce;
zend_class_entry *nc_view_tpl_ce;

ZEND_DECLARE_MODULE_GLOBALS(nc)

PHP_INI_BEGIN()
	
PHP_INI_END()

static PHP_MINIT_FUNCTION(nc)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif
	REGISTER_INI_ENTRIES();
	ZEPHIR_INIT(Nc_Factory_FactoryInterface);
	ZEPHIR_INIT(Nc_View_ViewInterface);
	ZEPHIR_INIT(Nc_Db_DbInterface);
	ZEPHIR_INIT(Nc_Logger_LoggerInterface);
	ZEPHIR_INIT(Nc_Std_GroupedInterface);
	ZEPHIR_INIT(Nc_Std_SequenceInterface);
	ZEPHIR_INIT(Nc_Std_CacheInterface);
	ZEPHIR_INIT(Nc_Std_QueueInterface);
	ZEPHIR_INIT(Nc_Std_RateLimiterInterface);
	ZEPHIR_INIT(Nc_Task_TaskExecutorInterface);
	ZEPHIR_INIT(Nc_Exception);
	ZEPHIR_INIT(Nc_Factory_FactoryAbstract);
	ZEPHIR_INIT(Nc_Db_DbAbstract);
	ZEPHIR_INIT(Nc_Logger_LoggerAbstract);
	ZEPHIR_INIT(Nc_Db_Exception);
	ZEPHIR_INIT(Nc_Factory_ClassNameAbstract);
	ZEPHIR_INIT(Nc_Image_ImageAbstract);
	ZEPHIR_INIT(Nc_Storage_StorageAbstract);
	ZEPHIR_INIT(Nc_Application_ControllerAbstract);
	ZEPHIR_INIT(Nc_Application_Exception);
	ZEPHIR_INIT(Nc_Db_PdoAbstract);
	ZEPHIR_INIT(Nc_Image_ImageBackendAbstract);
	ZEPHIR_INIT(Nc_Loader_LoaderAbstract);
	ZEPHIR_INIT(Nc_Router_RouterAbstract);
	ZEPHIR_INIT(Nc_Task_TaskManagerAbstract);
	ZEPHIR_INIT(Nc_Factory_Prefixed);
	ZEPHIR_INIT(Nc_Image_Image);
	ZEPHIR_INIT(Nc_Router_Exception);
	ZEPHIR_INIT(Nc_Std_GroupedRedisHash);
	ZEPHIR_INIT(Nc_Application_ControllerAbstractCli);
	ZEPHIR_INIT(Nc_Application_ControllerAbstractHttp);
	ZEPHIR_INIT(Nc_Application_NotFoundException);
	ZEPHIR_INIT(Nc_Application_UploadedFile);
	ZEPHIR_INIT(Nc_Application_Uploader);
	ZEPHIR_INIT(Nc_Application_UploaderException);
	ZEPHIR_INIT(Nc_Db_Collection);
	ZEPHIR_INIT(Nc_Db_Entity);
	ZEPHIR_INIT(Nc_Db_Model);
	ZEPHIR_INIT(Nc_Db_ModelException);
	ZEPHIR_INIT(Nc_Db_Oci8);
	ZEPHIR_INIT(Nc_Db_PdoMysql);
	ZEPHIR_INIT(Nc_Db_PdoPgsql);
	ZEPHIR_INIT(Nc_Db_QueryException);
	ZEPHIR_INIT(Nc_Db_TransactionException);
	ZEPHIR_INIT(Nc_Factory_ClassNameClosure);
	ZEPHIR_INIT(Nc_Factory_Di);
	ZEPHIR_INIT(Nc_Factory_Exception);
	ZEPHIR_INIT(Nc_Factory_Factories);
	ZEPHIR_INIT(Nc_Factory_Namespaced);
	ZEPHIR_INIT(Nc_Image_Captcha);
	ZEPHIR_INIT(Nc_Image_Exception);
	ZEPHIR_INIT(Nc_Image_Gd);
	ZEPHIR_INIT(Nc_Image_Imagick);
	ZEPHIR_INIT(Nc_Image_Text);
	ZEPHIR_INIT(Nc_Loader_Exception);
	ZEPHIR_INIT(Nc_Loader_NamePath);
	ZEPHIR_INIT(Nc_Loader_NamespaceDirectory);
	ZEPHIR_INIT(Nc_Logger_Exception);
	ZEPHIR_INIT(Nc_Logger_File);
	ZEPHIR_INIT(Nc_Logger_LoggerClosure);
	ZEPHIR_INIT(Nc_Logger_Loggers);
	ZEPHIR_INIT(Nc_Logger_Nil);
	ZEPHIR_INIT(Nc_NetUtils_Exception);
	ZEPHIR_INIT(Nc_NetUtils_SmtpMailer);
	ZEPHIR_INIT(Nc_NetUtils_TcpSocketClient);
	ZEPHIR_INIT(Nc_Router_Action);
	ZEPHIR_INIT(Nc_Router_ControllerAction);
	ZEPHIR_INIT(Nc_Router_NotFoundException);
	ZEPHIR_INIT(Nc_Std);
	ZEPHIR_INIT(Nc_Std_CacheApc);
	ZEPHIR_INIT(Nc_Std_CacheFileSystem);
	ZEPHIR_INIT(Nc_Std_Exception);
	ZEPHIR_INIT(Nc_Std_GroupedMongoCollections);
	ZEPHIR_INIT(Nc_Std_GroupedProxy);
	ZEPHIR_INIT(Nc_Std_GroupedRedisHashSerialized);
	ZEPHIR_INIT(Nc_Std_QueueRedis);
	ZEPHIR_INIT(Nc_Std_RateLimiterRedis);
	ZEPHIR_INIT(Nc_Std_SequenceMongoCollection);
	ZEPHIR_INIT(Nc_Std_SequenceMysql);
	ZEPHIR_INIT(Nc_Std_SequenceRedis);
	ZEPHIR_INIT(Nc_Std_SequenceRedisHash);
	ZEPHIR_INIT(Nc_Storage_Exception);
	ZEPHIR_INIT(Nc_Storage_Fastdfs);
	ZEPHIR_INIT(Nc_Storage_FileSystem);
	ZEPHIR_INIT(Nc_Storage_Ftp);
	ZEPHIR_INIT(Nc_Task_Exception);
	ZEPHIR_INIT(Nc_Task_QueueRedis);
	ZEPHIR_INIT(Nc_Task_RunDirectly);
	ZEPHIR_INIT(Nc_View_Content);
	ZEPHIR_INIT(Nc_View_Exception);
	ZEPHIR_INIT(Nc_View_Facade);
	ZEPHIR_INIT(Nc_View_HttpResponse);
	ZEPHIR_INIT(Nc_View_Json);
	ZEPHIR_INIT(Nc_View_Nil);
	ZEPHIR_INIT(Nc_View_ReadFile);
	ZEPHIR_INIT(Nc_View_Redirect);
	ZEPHIR_INIT(Nc_View_Tpl);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(nc)
{

	zephir_deinitialize_memory(TSRMLS_C);
	UNREGISTER_INI_ENTRIES();
	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_nc_globals *nc_globals TSRMLS_DC)
{
	nc_globals->initialized = 0;

	/* Memory options */
	nc_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	nc_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	nc_globals->cache_enabled = 1;

	/* Recursive Lock */
	nc_globals->recursive_lock = 0;

	/* Static cache */
	memset(nc_globals->scache, '\0', sizeof(zephir_fcall_cache_entry*) * ZEPHIR_MAX_CACHE_SLOTS);


}

static PHP_RINIT_FUNCTION(nc)
{

	zend_nc_globals *nc_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(nc_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(nc_globals_ptr TSRMLS_CC);


	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(nc)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(nc)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_NC_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_NC_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_NC_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_NC_VERSION);
	php_info_print_table_row(2, "Build Date", __DATE__ " " __TIME__ );
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_NC_ZEPVERSION);
	php_info_print_table_end();

	DISPLAY_INI_ENTRIES();
}

static PHP_GINIT_FUNCTION(nc)
{
	php_zephir_init_globals(nc_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(nc)
{

}


zend_function_entry php_nc_functions[] = {
ZEND_FE_END

};

zend_module_entry nc_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_NC_EXTNAME,
	php_nc_functions,
	PHP_MINIT(nc),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(nc),
#else
	NULL,
#endif
	PHP_RINIT(nc),
	PHP_RSHUTDOWN(nc),
	PHP_MINFO(nc),
	PHP_NC_VERSION,
	ZEND_MODULE_GLOBALS(nc),
	PHP_GINIT(nc),
	PHP_GSHUTDOWN(nc),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_NC
ZEND_GET_MODULE(nc)
#endif
