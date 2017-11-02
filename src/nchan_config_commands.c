//AUTOGENERATED, do not edit! see nchan_commands.rb
static ngx_command_t  nchan_commands[] = {
    { ngx_string("nchan_channel_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_pubsub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_pubsub_channel_id"), //alt for nchan_channel_id
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_pubsub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_publisher_channel_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_pub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_pub_channel_id"), //alt for nchan_publisher_channel_id
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_pub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_publisher_upstream_request"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, publisher_upstream_request_url),
    NULL } ,

  { ngx_string("nchan_deflate_message_for_websocket"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_compression_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_channel_id_split_delimiter"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_id_split_delimiter),
    NULL } ,

  { ngx_string("nchan_subscriber_channel_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_sub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_sub_channel_id"), //alt for nchan_subscriber_channel_id
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6|NGX_CONF_TAKE7,
    nchan_set_sub_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_pubsub"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6,
    nchan_pubsub_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_pubsub_location"), //alt for nchan_pubsub
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5|NGX_CONF_TAKE6,
    nchan_pubsub_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_longpoll_multipart_response"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_set_longpoll_multipart,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, longpoll_multimsg),
    NULL } ,

  { ngx_string("nchan_eventsource_event"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, eventsource_event),
    NULL } ,

  { ngx_string("nchan_subscriber"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5,
    nchan_subscriber_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_subscriber"), //legacy for nchan_subscriber
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5,
    nchan_subscriber_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_subscriber_location"), //alt for nchan_subscriber
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5,
    nchan_subscriber_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_compound_etag_message_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, msg_in_etag_only),
    NULL } ,

  { ngx_string("nchan_subscriber_message_id_custom_etag_header"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, custom_msgtag_header),
    NULL } ,

  { ngx_string("nchan_subscriber_last_message_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5,
    nchan_subscriber_last_message_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_http_raw_stream_separator"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_set_raw_subscriber_separator,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_http_raw_stream_separator),
    NULL } ,

  { ngx_string("nchan_subscriber_keep_alive_string"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_keep_alive_string),
    NULL } ,

  { ngx_string("nchan_subscriber_first_message"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_subscriber_first_message_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_keep_alive_interval"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_keep_alive_interval),
    NULL } ,

  { ngx_string("nchan_websocket_ping_interval"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, websocket_ping_interval),
    NULL } ,

  { ngx_string("nchan_websocket_client_heartbeat"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE2,
    nchan_websocket_heartbeat_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, websocket_heartbeat),
    NULL } ,

  { ngx_string("nchan_publisher"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2,
    nchan_publisher_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_publisher"), //legacy for nchan_publisher
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2,
    nchan_publisher_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("nchan_publisher_location"), //alt for nchan_publisher
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2,
    nchan_publisher_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_timeout),
    NULL } ,
  { ngx_string("push_subscriber_timeout"), //legacy for nchan_subscriber_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_timeout),
    NULL } ,

  { ngx_string("nchan_authorize_request"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, authorize_request_url),
    NULL } ,

  { ngx_string("nchan_subscribe_request"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscribe_request_url),
    NULL } ,

  { ngx_string("nchan_unsubscribe_request"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_unsubscribe_request_url,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, unsubscribe_request_url),
    NULL } ,

  { ngx_string("nchan_message_temp_path"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_path_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, message_temp_path),
    NULL } ,

  { ngx_string("nchan_store_messages"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_store_messages_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_store_messages"), //legacy for nchan_store_messages
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_store_messages_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_shared_memory_size"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, shm_size),
    NULL } ,
  { ngx_string("push_max_reserved_memory"), //legacy for nchan_shared_memory_size
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, shm_size),
    NULL } ,
  { ngx_string("nchan_max_reserved_memory"), //legacy for nchan_shared_memory_size
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, shm_size),
    NULL } ,

  { ngx_string("nchan_permessage_deflate_compression_level"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_deflate_compression_level_directive,
    NGX_HTTP_MAIN_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_permessage_deflate_compression_strategy"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_deflate_compression_strategy_directive,
    NGX_HTTP_MAIN_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_permessage_deflate_compression_window"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_deflate_compression_window_directive,
    NGX_HTTP_MAIN_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_permessage_deflate_compression_memlevel"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    nchan_conf_deflate_compression_memlevel_directive,
    NGX_HTTP_MAIN_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_redis_url"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_redis_url,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.url),
    NULL } ,

  { ngx_string("nchan_redis_pass"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_redis_upstream_pass,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis),
    NULL } ,

  { ngx_string("nchan_redis_pass_inheritable"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.upstream_inheritable),
    NULL } ,

  { ngx_string("nchan_redis_publish_msgpacked_max_size"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, redis_publish_message_msgkey_size),
    NULL } ,

  { ngx_string("nchan_redis_server"),
    NGX_HTTP_UPS_CONF|NGX_CONF_TAKE1,
    ngx_conf_upstream_redis_server,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_redis_storage_mode"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_UPS_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_redis_storage_mode_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.storage_mode),
    NULL } ,

  { ngx_string("nchan_use_redis"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_enable_redis,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.url_enabled),
    NULL } ,

  { ngx_string("nchan_redis_ping_interval"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.ping_interval),
    NULL } ,

  { ngx_string("nchan_redis_namespace"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_UPS_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_redis_namespace_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis.namespace),
    NULL } ,

  { ngx_string("nchan_redis_fakesub_timer_interval"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_msec_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, redis_fakesub_timer_interval),
    NULL } ,

  { ngx_string("nchan_redis_idle_channel_cache_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, redis_idle_channel_cache_timeout),
    NULL } ,

  { ngx_string("nchan_message_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_timeout,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, message_timeout),
    NULL } ,
  { ngx_string("push_message_timeout"), //legacy for nchan_message_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_timeout,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, message_timeout),
    NULL } ,

  { ngx_string("nchan_message_buffer_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,
  { ngx_string("push_max_message_buffer_length"), //legacy for nchan_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,
  { ngx_string("push_message_buffer_length"), //legacy for nchan_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,
  { ngx_string("nchan_message_max_buffer_length"), //alt for nchan_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,

  { ngx_string("nchan_subscribe_existing_channels_only"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscribe_only_existing_channel),
    NULL } ,
  { ngx_string("push_authorized_channels_only"), //legacy for nchan_subscribe_existing_channels_only
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscribe_only_existing_channel),
    NULL } ,

  { ngx_string("nchan_access_control_allow_origin"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, allow_origin),
    NULL } ,

  { ngx_string("nchan_channel_group"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_group),
    NULL } ,
  { ngx_string("push_channel_group"), //legacy for nchan_channel_group
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_group),
    NULL } ,

  { ngx_string("nchan_channel_group_accounting"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.enable_accounting),
    NULL } ,

  { ngx_string("nchan_group_location"),
    NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3,
    nchan_group_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_group_max_channels"),
    NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.max_channels),
    NULL } ,

  { ngx_string("nchan_group_max_messages"),
    NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.max_messages),
    NULL } ,

  { ngx_string("nchan_group_max_messages_memory"),
    NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.max_messages_shm_bytes),
    NULL } ,

  { ngx_string("nchan_group_max_messages_disk"),
    NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.max_messages_file_bytes),
    NULL } ,

  { ngx_string("nchan_group_max_subscribers"),
    NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, group.max_subscribers),
    NULL } ,

  { ngx_string("nchan_channel_events_channel_id"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_set_channel_events_channel_id,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_stub_status"),
    NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS,
    nchan_stub_status_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_channel_event_string"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    ngx_http_set_complex_value_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_event_string),
    NULL } ,

  { ngx_string("nchan_max_channel_id_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_id_length),
    NULL } ,
  { ngx_string("push_max_channel_id_length"), //legacy for nchan_max_channel_id_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_id_length),
    NULL } ,

  { ngx_string("nchan_max_channel_subscribers"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_subscribers),
    NULL } ,
  { ngx_string("push_max_channel_subscribers"), //legacy for nchan_max_channel_subscribers
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_subscribers),
    NULL } ,

  { ngx_string("nchan_channel_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_timeout),
    NULL } ,
  { ngx_string("push_channel_timeout"), //legacy for nchan_channel_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_timeout),
    NULL } ,

  { ngx_string("nchan_storage_engine"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_storage_engine,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, storage_engine),
    NULL } ,

  { ngx_string("push_min_message_buffer_length"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_ignore_obsolete_setting,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("push_subscriber_concurrency"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_HTTP_LIF_CONF|NGX_CONF_TAKE1,
    nchan_ignore_subscriber_concurrency,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,


  ngx_null_command
};
