/* Generated by ../xlat/gen.sh from ../xlat/sockoptions.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sockoptions in mpers mode

#else

static
const struct xlat sockoptions[] = {
#if defined(SO_DEBUG) || (defined(HAVE_DECL_SO_DEBUG) && HAVE_DECL_SO_DEBUG)
  XLAT(SO_DEBUG),
#endif
#if defined(SO_REUSEADDR) || (defined(HAVE_DECL_SO_REUSEADDR) && HAVE_DECL_SO_REUSEADDR)
  XLAT(SO_REUSEADDR),
#endif
#if defined(SO_TYPE) || (defined(HAVE_DECL_SO_TYPE) && HAVE_DECL_SO_TYPE)
  XLAT(SO_TYPE),
#endif
#if defined(SO_ERROR) || (defined(HAVE_DECL_SO_ERROR) && HAVE_DECL_SO_ERROR)
  XLAT(SO_ERROR),
#endif
#if defined(SO_DONTROUTE) || (defined(HAVE_DECL_SO_DONTROUTE) && HAVE_DECL_SO_DONTROUTE)
  XLAT(SO_DONTROUTE),
#endif
#if defined(SO_BROADCAST) || (defined(HAVE_DECL_SO_BROADCAST) && HAVE_DECL_SO_BROADCAST)
  XLAT(SO_BROADCAST),
#endif
#if defined(SO_SNDBUF) || (defined(HAVE_DECL_SO_SNDBUF) && HAVE_DECL_SO_SNDBUF)
  XLAT(SO_SNDBUF),
#endif
#if defined(SO_RCVBUF) || (defined(HAVE_DECL_SO_RCVBUF) && HAVE_DECL_SO_RCVBUF)
  XLAT(SO_RCVBUF),
#endif
#if defined(SO_SNDBUFFORCE) || (defined(HAVE_DECL_SO_SNDBUFFORCE) && HAVE_DECL_SO_SNDBUFFORCE)
  XLAT(SO_SNDBUFFORCE),
#endif
#if defined(SO_RCVBUFFORCE) || (defined(HAVE_DECL_SO_RCVBUFFORCE) && HAVE_DECL_SO_RCVBUFFORCE)
  XLAT(SO_RCVBUFFORCE),
#endif
#if defined(SO_KEEPALIVE) || (defined(HAVE_DECL_SO_KEEPALIVE) && HAVE_DECL_SO_KEEPALIVE)
  XLAT(SO_KEEPALIVE),
#endif
#if defined(SO_OOBINLINE) || (defined(HAVE_DECL_SO_OOBINLINE) && HAVE_DECL_SO_OOBINLINE)
  XLAT(SO_OOBINLINE),
#endif
#if defined(SO_NO_CHECK) || (defined(HAVE_DECL_SO_NO_CHECK) && HAVE_DECL_SO_NO_CHECK)
  XLAT(SO_NO_CHECK),
#endif
#if defined(SO_PRIORITY) || (defined(HAVE_DECL_SO_PRIORITY) && HAVE_DECL_SO_PRIORITY)
  XLAT(SO_PRIORITY),
#endif
#if defined(SO_LINGER) || (defined(HAVE_DECL_SO_LINGER) && HAVE_DECL_SO_LINGER)
  XLAT(SO_LINGER),
#endif
#if defined(SO_BSDCOMPAT) || (defined(HAVE_DECL_SO_BSDCOMPAT) && HAVE_DECL_SO_BSDCOMPAT)
  XLAT(SO_BSDCOMPAT),
#endif
#if defined(SO_REUSEPORT) || (defined(HAVE_DECL_SO_REUSEPORT) && HAVE_DECL_SO_REUSEPORT)
  XLAT(SO_REUSEPORT),
#endif
#if defined(SO_PASSCRED) || (defined(HAVE_DECL_SO_PASSCRED) && HAVE_DECL_SO_PASSCRED)
  XLAT(SO_PASSCRED),
#endif
#if defined(SO_PEERCRED) || (defined(HAVE_DECL_SO_PEERCRED) && HAVE_DECL_SO_PEERCRED)
  XLAT(SO_PEERCRED),
#endif
#if defined(SO_RCVLOWAT) || (defined(HAVE_DECL_SO_RCVLOWAT) && HAVE_DECL_SO_RCVLOWAT)
  XLAT(SO_RCVLOWAT),
#endif
#if defined(SO_SNDLOWAT) || (defined(HAVE_DECL_SO_SNDLOWAT) && HAVE_DECL_SO_SNDLOWAT)
  XLAT(SO_SNDLOWAT),
#endif
#if defined(SO_RCVTIMEO) || (defined(HAVE_DECL_SO_RCVTIMEO) && HAVE_DECL_SO_RCVTIMEO)
  XLAT(SO_RCVTIMEO),
#endif
#if defined(SO_SNDTIMEO) || (defined(HAVE_DECL_SO_SNDTIMEO) && HAVE_DECL_SO_SNDTIMEO)
  XLAT(SO_SNDTIMEO),
#endif
#if defined(SO_SECURITY_AUTHENTICATION) || (defined(HAVE_DECL_SO_SECURITY_AUTHENTICATION) && HAVE_DECL_SO_SECURITY_AUTHENTICATION)
  XLAT(SO_SECURITY_AUTHENTICATION),
#endif
#if defined(SO_SECURITY_ENCRYPTION_TRANSPORT) || (defined(HAVE_DECL_SO_SECURITY_ENCRYPTION_TRANSPORT) && HAVE_DECL_SO_SECURITY_ENCRYPTION_TRANSPORT)
  XLAT(SO_SECURITY_ENCRYPTION_TRANSPORT),
#endif
#if defined(SO_SECURITY_ENCRYPTION_NETWORK) || (defined(HAVE_DECL_SO_SECURITY_ENCRYPTION_NETWORK) && HAVE_DECL_SO_SECURITY_ENCRYPTION_NETWORK)
  XLAT(SO_SECURITY_ENCRYPTION_NETWORK),
#endif
#if defined(SO_BINDTODEVICE) || (defined(HAVE_DECL_SO_BINDTODEVICE) && HAVE_DECL_SO_BINDTODEVICE)
  XLAT(SO_BINDTODEVICE),
#endif
#if defined(SO_ATTACH_FILTER) || (defined(HAVE_DECL_SO_ATTACH_FILTER) && HAVE_DECL_SO_ATTACH_FILTER)
  XLAT(SO_ATTACH_FILTER),
#endif
#if defined(SO_GET_FILTER) || (defined(HAVE_DECL_SO_GET_FILTER) && HAVE_DECL_SO_GET_FILTER)
  XLAT(SO_GET_FILTER),
#endif
#if defined(SO_DETACH_FILTER) || (defined(HAVE_DECL_SO_DETACH_FILTER) && HAVE_DECL_SO_DETACH_FILTER)
  XLAT(SO_DETACH_FILTER),
#endif
#if defined(SO_DETACH_BPF) || (defined(HAVE_DECL_SO_DETACH_BPF) && HAVE_DECL_SO_DETACH_BPF)
  XLAT(SO_DETACH_BPF),
#endif
#if defined(SO_PEERNAME) || (defined(HAVE_DECL_SO_PEERNAME) && HAVE_DECL_SO_PEERNAME)
  XLAT(SO_PEERNAME),
#endif
#if defined(SO_TIMESTAMP) || (defined(HAVE_DECL_SO_TIMESTAMP) && HAVE_DECL_SO_TIMESTAMP)
  XLAT(SO_TIMESTAMP),
#endif
#if defined(SO_ACCEPTCONN) || (defined(HAVE_DECL_SO_ACCEPTCONN) && HAVE_DECL_SO_ACCEPTCONN)
  XLAT(SO_ACCEPTCONN),
#endif
#if defined(SO_PEERSEC) || (defined(HAVE_DECL_SO_PEERSEC) && HAVE_DECL_SO_PEERSEC)
  XLAT(SO_PEERSEC),
#endif
#if defined(SO_PASSSEC) || (defined(HAVE_DECL_SO_PASSSEC) && HAVE_DECL_SO_PASSSEC)
  XLAT(SO_PASSSEC),
#endif
#if defined(SO_TIMESTAMPNS) || (defined(HAVE_DECL_SO_TIMESTAMPNS) && HAVE_DECL_SO_TIMESTAMPNS)
  XLAT(SO_TIMESTAMPNS),
#endif
#if defined(SO_MARK) || (defined(HAVE_DECL_SO_MARK) && HAVE_DECL_SO_MARK)
  XLAT(SO_MARK),
#endif
#if defined(SO_TIMESTAMPING) || (defined(HAVE_DECL_SO_TIMESTAMPING) && HAVE_DECL_SO_TIMESTAMPING)
  XLAT(SO_TIMESTAMPING),
#endif
#if defined(SO_PROTOCOL) || (defined(HAVE_DECL_SO_PROTOCOL) && HAVE_DECL_SO_PROTOCOL)
  XLAT(SO_PROTOCOL),
#endif
#if defined(SO_DOMAIN) || (defined(HAVE_DECL_SO_DOMAIN) && HAVE_DECL_SO_DOMAIN)
  XLAT(SO_DOMAIN),
#endif
#if defined(SO_RXQ_OVFL) || (defined(HAVE_DECL_SO_RXQ_OVFL) && HAVE_DECL_SO_RXQ_OVFL)
  XLAT(SO_RXQ_OVFL),
#endif
#if defined(SO_WIFI_STATUS) || (defined(HAVE_DECL_SO_WIFI_STATUS) && HAVE_DECL_SO_WIFI_STATUS)
  XLAT(SO_WIFI_STATUS),
#endif
#if defined(SO_PEEK_OFF) || (defined(HAVE_DECL_SO_PEEK_OFF) && HAVE_DECL_SO_PEEK_OFF)
  XLAT(SO_PEEK_OFF),
#endif
#if defined(SO_NOFCS) || (defined(HAVE_DECL_SO_NOFCS) && HAVE_DECL_SO_NOFCS)
  XLAT(SO_NOFCS),
#endif
#if defined(SO_LOCK_FILTER) || (defined(HAVE_DECL_SO_LOCK_FILTER) && HAVE_DECL_SO_LOCK_FILTER)
  XLAT(SO_LOCK_FILTER),
#endif
#if defined(SO_SELECT_ERR_QUEUE) || (defined(HAVE_DECL_SO_SELECT_ERR_QUEUE) && HAVE_DECL_SO_SELECT_ERR_QUEUE)
  XLAT(SO_SELECT_ERR_QUEUE),
#endif
#if defined(SO_BUSY_POLL) || (defined(HAVE_DECL_SO_BUSY_POLL) && HAVE_DECL_SO_BUSY_POLL)
  XLAT(SO_BUSY_POLL),
#endif
#if defined(SO_MAX_PACING_RATE) || (defined(HAVE_DECL_SO_MAX_PACING_RATE) && HAVE_DECL_SO_MAX_PACING_RATE)
  XLAT(SO_MAX_PACING_RATE),
#endif
#if defined(SO_BPF_EXTENSIONS) || (defined(HAVE_DECL_SO_BPF_EXTENSIONS) && HAVE_DECL_SO_BPF_EXTENSIONS)
  XLAT(SO_BPF_EXTENSIONS),
#endif
#if defined(SO_INCOMING_CPU) || (defined(HAVE_DECL_SO_INCOMING_CPU) && HAVE_DECL_SO_INCOMING_CPU)
  XLAT(SO_INCOMING_CPU),
#endif
#if defined(SO_ATTACH_BPF) || (defined(HAVE_DECL_SO_ATTACH_BPF) && HAVE_DECL_SO_ATTACH_BPF)
  XLAT(SO_ATTACH_BPF),
#endif
#if defined(SO_ATTACH_REUSEPORT_CBPF) || (defined(HAVE_DECL_SO_ATTACH_REUSEPORT_CBPF) && HAVE_DECL_SO_ATTACH_REUSEPORT_CBPF)
  XLAT(SO_ATTACH_REUSEPORT_CBPF),
#endif
#if defined(SO_ATTACH_REUSEPORT_EBPF) || (defined(HAVE_DECL_SO_ATTACH_REUSEPORT_EBPF) && HAVE_DECL_SO_ATTACH_REUSEPORT_EBPF)
  XLAT(SO_ATTACH_REUSEPORT_EBPF),
#endif
#if defined(SO_CNX_ADVICE) || (defined(HAVE_DECL_SO_CNX_ADVICE) && HAVE_DECL_SO_CNX_ADVICE)
  XLAT(SO_CNX_ADVICE),
#endif

#if defined(SO_ALLRAW) || (defined(HAVE_DECL_SO_ALLRAW) && HAVE_DECL_SO_ALLRAW)
  XLAT(SO_ALLRAW),
#endif
#if defined(SO_ICS) || (defined(HAVE_DECL_SO_ICS) && HAVE_DECL_SO_ICS)
  XLAT(SO_ICS),
#endif
#if defined(SO_IMASOCKET) || (defined(HAVE_DECL_SO_IMASOCKET) && HAVE_DECL_SO_IMASOCKET)
  XLAT(SO_IMASOCKET),
#endif
#if defined(SO_LISTENING) || (defined(HAVE_DECL_SO_LISTENING) && HAVE_DECL_SO_LISTENING)
  XLAT(SO_LISTENING),
#endif
#if defined(SO_MGMT) || (defined(HAVE_DECL_SO_MGMT) && HAVE_DECL_SO_MGMT)
  XLAT(SO_MGMT),
#endif
#if defined(SO_ORDREL) || (defined(HAVE_DECL_SO_ORDREL) && HAVE_DECL_SO_ORDREL)
  XLAT(SO_ORDREL),
#endif
#if defined(SO_PARALLELSVR) || (defined(HAVE_DECL_SO_PARALLELSVR) && HAVE_DECL_SO_PARALLELSVR)
  XLAT(SO_PARALLELSVR),
#endif
#if defined(SO_PROTOTYPE) || (defined(HAVE_DECL_SO_PROTOTYPE) && HAVE_DECL_SO_PROTOTYPE)
  XLAT(SO_PROTOTYPE),
#endif
#if defined(SO_RDWR) || (defined(HAVE_DECL_SO_RDWR) && HAVE_DECL_SO_RDWR)
  XLAT(SO_RDWR),
#endif
#if defined(SO_SEMA) || (defined(HAVE_DECL_SO_SEMA) && HAVE_DECL_SO_SEMA)
  XLAT(SO_SEMA),
#endif
#if defined(SO_USELOOPBACK) || (defined(HAVE_DECL_SO_USELOOPBACK) && HAVE_DECL_SO_USELOOPBACK)
  XLAT(SO_USELOOPBACK),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
