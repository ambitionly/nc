
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/hash.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Nc_Db_Query_Mysql) {

	ZEPHIR_REGISTER_CLASS_EX(Nc\\Db\\Query, Mysql, nc, db_query_mysql, nc_db_query_dbqueryadapter_ce, nc_db_query_mysql_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Nc_Db_Query_Mysql, insert) {

	int ZEPHIR_LAST_CALL_STATUS;
	HashTable *_2;
	HashPosition _1;
	zval *returningId = NULL, *sql = NULL;
	zval *data_param = NULL, *returningId_param = NULL, *k = NULL, *v, *ks, *vs, *_0, **_3, *_4 = NULL, *_5, *_6, *_7, *_8, *_9 = NULL, *_10 = NULL, *_11 = NULL, *_12, *_13;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &data_param, &returningId_param);

	zephir_get_arrval(data, data_param);
	if (!returningId_param) {
		ZEPHIR_INIT_VAR(returningId);
		ZVAL_STRING(returningId, "", 1);
	} else {
		zephir_get_strval(returningId, returningId_param);
	}
	ZEPHIR_INIT_VAR(ks);
	array_init(ks);
	ZEPHIR_INIT_VAR(vs);
	array_init(vs);


	ZEPHIR_INIT_VAR(_0);
	zephir_array_keys(_0, data TSRMLS_CC);
	zephir_is_iterable(_0, &_2, &_1, 0, 0, "nc/db/query/mysql.zep", 17);
	for (
	  ; zephir_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zephir_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HVALUE(k, _3);
		zephir_array_append(&ks, k, PH_SEPARATE, "nc/db/query/mysql.zep", 13);
		ZEPHIR_INIT_LNVAR(_4);
		ZEPHIR_CONCAT_SV(_4, ":", k);
		zephir_array_append(&vs, _4, PH_SEPARATE, "nc/db/query/mysql.zep", 14);
	}
	_5 = zephir_fetch_nproperty_this(this_ptr, SL("table"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_6);
	zephir_fast_join_str(_6, SL(", "), ks TSRMLS_CC);
	ZEPHIR_INIT_VAR(_7);
	zephir_fast_join_str(_7, SL(", "), vs TSRMLS_CC);
	ZEPHIR_INIT_LNVAR(_4);
	ZEPHIR_CONCAT_SVSVSVS(_4, "insert into ", _5, " (", _6, ") values (", _7, ")");
	zephir_get_strval(sql, _4);
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("db"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_10);
	ZVAL_LONG(_10, 2);
	ZEPHIR_CALL_METHOD(&_9, _8, "query", NULL, _10, sql, data);
	zephir_check_call_status();
	if (!(zephir_is_true(_9))) {
		RETURN_MM_BOOL(0);
	}
	if (zephir_fast_strlen_ev(returningId) < 1) {
		RETURN_MM_BOOL(1);
	}
	ZEPHIR_OBS_VAR(v);
	if (zephir_array_isset_fetch(&v, data, returningId, 0 TSRMLS_CC)) {
		RETURN_CCTOR(v);
	}
	_12 = zephir_fetch_nproperty_this(this_ptr, SL("db"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(_10);
	ZVAL_LONG(_10, (2 | 0x30));
	ZEPHIR_INIT_VAR(_13);
	ZVAL_STRING(_13, "select last_insert_id()", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_RETURN_CALL_METHOD(_12, "query", NULL, _10, _13);
	zephir_check_temp_parameter(_13);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Nc_Db_Query_Mysql, concat) {

	zend_bool prepend;
	zval *field_param = NULL, *value_param = NULL, *prepend_param = NULL;
	zval *field = NULL, *value = NULL, *_0 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &field_param, &value_param, &prepend_param);

	zephir_get_strval(field, field_param);
	zephir_get_strval(value, value_param);
	if (!prepend_param) {
		prepend = 0;
	} else {
		prepend = zephir_get_boolval(prepend_param);
	}


	if (prepend) {
		ZEPHIR_INIT_VAR(_0);
		ZEPHIR_CONCAT_SVSVS(_0, "concat(:", field, ", ", field, ")");
		zephir_update_property_array(this_ptr, SL("updates"), field, _0 TSRMLS_CC);
	} else {
		ZEPHIR_INIT_LNVAR(_0);
		ZEPHIR_CONCAT_SVSVS(_0, "concat(", field, ", :", field, ")");
		zephir_update_property_array(this_ptr, SL("updates"), field, _0 TSRMLS_CC);
	}
	zephir_update_property_array(this_ptr, SL("updateParams"), field, value TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Nc_Db_Query_Mysql, replace) {

	int ZEPHIR_LAST_CALL_STATUS;
	HashTable *_2;
	HashPosition _1;
	zval *sql = NULL;
	zval *data_param = NULL, *primaryKey = NULL, *k = NULL, *ks, *vs, *_0, **_3, *_4 = NULL, *_5, *_6, *_7, *_8, *_9;
	zval *data = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &data_param, &primaryKey);

	zephir_get_arrval(data, data_param);
	if (!primaryKey) {
		ZEPHIR_INIT_VAR(primaryKey);
		ZVAL_STRING(primaryKey, "id", 1);
	}
	ZEPHIR_INIT_VAR(ks);
	array_init(ks);
	ZEPHIR_INIT_VAR(vs);
	array_init(vs);


	ZEPHIR_INIT_VAR(_0);
	zephir_array_keys(_0, data TSRMLS_CC);
	zephir_is_iterable(_0, &_2, &_1, 0, 0, "nc/db/query/mysql.zep", 56);
	for (
	  ; zephir_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zephir_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HVALUE(k, _3);
		zephir_array_append(&ks, k, PH_SEPARATE, "nc/db/query/mysql.zep", 52);
		ZEPHIR_INIT_LNVAR(_4);
		ZEPHIR_CONCAT_SV(_4, ":", k);
		zephir_array_append(&vs, _4, PH_SEPARATE, "nc/db/query/mysql.zep", 53);
	}
	_5 = zephir_fetch_nproperty_this(this_ptr, SL("table"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_6);
	zephir_fast_join_str(_6, SL(", "), ks TSRMLS_CC);
	ZEPHIR_INIT_VAR(_7);
	zephir_fast_join_str(_7, SL(", "), vs TSRMLS_CC);
	ZEPHIR_INIT_LNVAR(_4);
	ZEPHIR_CONCAT_SVSVSVS(_4, "replace into ", _5, " (", _6, ") values (", _7, ")");
	zephir_get_strval(sql, _4);
	_8 = zephir_fetch_nproperty_this(this_ptr, SL("db"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_9);
	ZVAL_LONG(_9, 2);
	ZEPHIR_RETURN_CALL_METHOD(_8, "query", NULL, _9, sql, data);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Nc_Db_Query_Mysql, getSelectAsString) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL, *_1 = NULL, *_2 = NULL, *_3 = NULL, *_4 = NULL, *_5 = NULL, *_6, *_7, *_8, *_9;
	zval *s;

	ZEPHIR_MM_GROW();
	ZEPHIR_INIT_VAR(s);
	ZVAL_STRING(s, "select ", 1);

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "buildfield", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _0 TSRMLS_CC);
	zephir_concat_self_str(&s, " from ", sizeof(" from ")-1 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_1, this_ptr, "buildtableandjoin", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _1 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_2, this_ptr, "buildwhere", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _2 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_3, this_ptr, "buildgroupby", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _3 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_4, this_ptr, "buildhaving", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _4 TSRMLS_CC);
	ZEPHIR_CALL_METHOD(&_5, this_ptr, "buildorderby", NULL);
	zephir_check_call_status();
	zephir_concat_self(&s, _5 TSRMLS_CC);
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("pageSize"), PH_NOISY_CC);
	if (ZEPHIR_GT_LONG(_6, 0)) {
		_7 = zephir_fetch_nproperty_this(this_ptr, SL("rowOffset"), PH_NOISY_CC);
		_8 = zephir_fetch_nproperty_this(this_ptr, SL("pageSize"), PH_NOISY_CC);
		ZEPHIR_INIT_VAR(_9);
		ZEPHIR_CONCAT_SVSV(_9, " limit ", _7, ", ", _8);
		zephir_concat_self(&s, _9 TSRMLS_CC);
	}
	RETURN_CTOR(s);

}

PHP_METHOD(Nc_Db_Query_Mysql, selectAndCount) {

	zephir_nts_static zephir_fcall_cache_entry *_4 = NULL;
	int ZEPHIR_LAST_CALL_STATUS;
	long numRows;
	zval *data = NULL, *_0 = NULL, *_1 = NULL, *_2 = NULL, *_3 = NULL, *_6, *_7, *_8 = NULL;
	zval *sql = NULL, *_5 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getselectasstring", NULL);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "/^select/", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_2);
	ZVAL_STRING(_2, "select sql_calc_found_rows", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_3, "preg_replace", &_4, _1, _2, _0);
	zephir_check_temp_parameter(_1);
	zephir_check_temp_parameter(_2);
	zephir_check_call_status();
	zephir_get_strval(_5, _3);
	ZEPHIR_CPY_WRT(sql, _5);
	_6 = zephir_fetch_nproperty_this(this_ptr, SL("db"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_LONG(_1, (1 | 0x10));
	ZEPHIR_CALL_METHOD(&data, _6, "query", NULL, _1, sql);
	zephir_check_call_status();
	_7 = zephir_fetch_nproperty_this(this_ptr, SL("db"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_LONG(_1, (1 | 0x30));
	ZEPHIR_INIT_NVAR(_2);
	ZVAL_STRING(_2, "select found_rows()", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_METHOD(&_8, _7, "query", NULL, _1, _2);
	zephir_check_temp_parameter(_2);
	zephir_check_call_status();
	numRows = zephir_get_intval(_8);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_LONG(_1, numRows);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setnumrows", NULL, _1);
	zephir_check_call_status();
	RETURN_CCTOR(data);

}

PHP_METHOD(Nc_Db_Query_Mysql, buildOrderBy) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_1 = NULL;
	zval *_0;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("orderBy"), PH_NOISY_CC);
	if (ZEPHIR_IS_FALSE_IDENTICAL(_0)) {
		RETURN_MM_STRING(" order by rand()", 1);
	}
	ZEPHIR_RETURN_CALL_PARENT(nc_db_query_mysql_ce, this_ptr, "buildorderby", &_1);
	zephir_check_call_status();
	RETURN_MM();

}
