
extern zend_class_entry *nc_db_dbinterface_ce;

ZEPHIR_INIT_CLASS(Nc_Db_DbInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_quote, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_query, 0, 0, 2)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, sql)
	ZEND_ARG_ARRAY_INFO(0, params, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_savepoint, 0, 0, 1)
	ZEND_ARG_INFO(0, savepoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_releasesavepoint, 0, 0, 1)
	ZEND_ARG_INFO(0, savepoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_rollbacktosavepoint, 0, 0, 1)
	ZEND_ARG_INFO(0, savepoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_insert, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
	ZEND_ARG_INFO(0, returningId)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_update, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_upsert, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
	ZEND_ARG_INFO(0, primaryKey)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_select, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_countandselect, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_selectunionall, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, selects, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_countandselectunionall, 0, 0, 1)
	ZEND_ARG_ARRAY_INFO(0, selects, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_count, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_max, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_min, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_sum, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_avg, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_aggregation, 0, 0, 3)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, aggregationFunction)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_aggregations, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_ARRAY_INFO(0, aggregations, 0)
	ZEND_ARG_ARRAY_INFO(0, where, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_db_dbinterface_groupaggregations, 0, 0, 3)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, groupBy)
	ZEND_ARG_ARRAY_INFO(0, aggregations, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(nc_db_dbinterface_method_entry) {
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, getInternalHandler, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, getQueries, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, quote, arginfo_nc_db_dbinterface_quote)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, query, arginfo_nc_db_dbinterface_query)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, inTransaction, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, begin, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, commit, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, rollback, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, savepoint, arginfo_nc_db_dbinterface_savepoint)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, releaseSavepoint, arginfo_nc_db_dbinterface_releasesavepoint)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, releaseLastSavepoint, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, rollbackToSavepoint, arginfo_nc_db_dbinterface_rollbacktosavepoint)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, rollbackToLastSavepoint, NULL)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, insert, arginfo_nc_db_dbinterface_insert)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, delete, arginfo_nc_db_dbinterface_delete)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, update, arginfo_nc_db_dbinterface_update)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, upsert, arginfo_nc_db_dbinterface_upsert)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, select, arginfo_nc_db_dbinterface_select)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, countAndSelect, arginfo_nc_db_dbinterface_countandselect)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, selectUnionAll, arginfo_nc_db_dbinterface_selectunionall)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, countAndSelectUnionAll, arginfo_nc_db_dbinterface_countandselectunionall)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, count, arginfo_nc_db_dbinterface_count)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, max, arginfo_nc_db_dbinterface_max)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, min, arginfo_nc_db_dbinterface_min)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, sum, arginfo_nc_db_dbinterface_sum)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, avg, arginfo_nc_db_dbinterface_avg)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, aggregation, arginfo_nc_db_dbinterface_aggregation)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, aggregations, arginfo_nc_db_dbinterface_aggregations)
	PHP_ABSTRACT_ME(Nc_Db_DbInterface, groupAggregations, arginfo_nc_db_dbinterface_groupaggregations)
	PHP_FE_END
};