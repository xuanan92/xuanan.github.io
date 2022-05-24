// standard libs
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <time.h>

// linux & sockets
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <errno.h>
#include <netinet/ip.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <poll.h>
#include <signal.h>
#include <sys/random.h>
#include <time.h>
#include <arpa/inet.h>

// libxml
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>

// json parser
#include "json.h"

// curl
#include <curl/curl.h>

// openssl
#include <openssl/bio.h>
#include <openssl/ssl.h>
#include <openssl/opensslv.h>
#include <openssl/err.h>
#include <openssl/crypto.h>

// crypto
#include "blake3.h"
#include "sodium.h"

// postgres
#include "postgresql/libpq-fe.h"

// erp
#include "erp_types.h"
#include "erp_memory.h"
#include "erp_string.h"
#include "erp_xml.h"
#include "erp_misc.h"
#include "erp_reqres.h"
#include "erp_io.h"
#include "erp_postgres.h"

#define Assert(exp) if (!(exp)) {raise(SIGSEGV);}

#define MAX_CONNECTION_ALLOWED 100000
