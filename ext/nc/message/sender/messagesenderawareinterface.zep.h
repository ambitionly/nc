
extern zend_class_entry *nc_message_sender_messagesenderawareinterface_ce;

ZEPHIR_INIT_CLASS(Nc_Message_Sender_MessageSenderAwareInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_nc_message_sender_messagesenderawareinterface_setmessagesender, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, messageSender, Nc\\Message\\Sender\\MessageSenderInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(nc_message_sender_messagesenderawareinterface_method_entry) {
	PHP_ABSTRACT_ME(Nc_Message_Sender_MessageSenderAwareInterface, setMessageSender, arginfo_nc_message_sender_messagesenderawareinterface_setmessagesender)
	PHP_ABSTRACT_ME(Nc_Message_Sender_MessageSenderAwareInterface, getMessageSender, NULL)
  PHP_FE_END
};