#include <ngx_http.h>
#include <nchan_types.h>
#include <nchan_defs.h>
#include <nchan_output.h>
#include <store/nchan_store.h>


//debugging config
//#define FAKESHARD 1
#if FAKESHARD
//#define PUB_FAKE_WORKER 1
//#define SUB_FAKE_WORKER 2
//#define ONE_FAKE_CHANNEL_OWNER 0
#define MAX_FAKE_WORKERS 5
#endif


extern ngx_pool_t *nchan_pool;
extern ngx_int_t nchan_worker_processes;
extern ngx_module_t nchan_module;
extern nchan_store_t *nchan_store;

ngx_str_t * nchan_get_header_value(ngx_http_request_t *r, ngx_str_t header_name);


ngx_int_t nchan_subscriber_handler(ngx_http_request_t *r);
ngx_int_t nchan_publisher_handler(ngx_http_request_t *r);
ngx_int_t nchan_subscriber_get_etag_int(ngx_http_request_t * r);
void ngx_http_push_copy_preallocated_buffer(ngx_buf_t *buf, ngx_buf_t *cbuf);
