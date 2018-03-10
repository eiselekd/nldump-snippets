/* Generated by ../xlat/gen.sh from ../xlat/sockpacketoptions.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sockpacketoptions in mpers mode

#else

static
const struct xlat sockpacketoptions[] = {
#if defined(PACKET_ADD_MEMBERSHIP) || (defined(HAVE_DECL_PACKET_ADD_MEMBERSHIP) && HAVE_DECL_PACKET_ADD_MEMBERSHIP)
  XLAT(PACKET_ADD_MEMBERSHIP),
#endif
#if defined(PACKET_DROP_MEMBERSHIP) || (defined(HAVE_DECL_PACKET_DROP_MEMBERSHIP) && HAVE_DECL_PACKET_DROP_MEMBERSHIP)
  XLAT(PACKET_DROP_MEMBERSHIP),
#endif
#if defined(PACKET_RECV_OUTPUT) || (defined(HAVE_DECL_PACKET_RECV_OUTPUT) && HAVE_DECL_PACKET_RECV_OUTPUT)
  XLAT(PACKET_RECV_OUTPUT),
#endif
#if defined(PACKET_RX_RING) || (defined(HAVE_DECL_PACKET_RX_RING) && HAVE_DECL_PACKET_RX_RING)
  XLAT(PACKET_RX_RING),
#endif
#if defined(PACKET_STATISTICS) || (defined(HAVE_DECL_PACKET_STATISTICS) && HAVE_DECL_PACKET_STATISTICS)
  XLAT(PACKET_STATISTICS),
#endif
#if defined(PACKET_COPY_THRESH) || (defined(HAVE_DECL_PACKET_COPY_THRESH) && HAVE_DECL_PACKET_COPY_THRESH)
  XLAT(PACKET_COPY_THRESH),
#endif
#if defined(PACKET_AUXDATA) || (defined(HAVE_DECL_PACKET_AUXDATA) && HAVE_DECL_PACKET_AUXDATA)
  XLAT(PACKET_AUXDATA),
#endif
#if defined(PACKET_ORIGDEV) || (defined(HAVE_DECL_PACKET_ORIGDEV) && HAVE_DECL_PACKET_ORIGDEV)
  XLAT(PACKET_ORIGDEV),
#endif
#if defined(PACKET_VERSION) || (defined(HAVE_DECL_PACKET_VERSION) && HAVE_DECL_PACKET_VERSION)
  XLAT(PACKET_VERSION),
#endif
#if defined(PACKET_HDRLEN) || (defined(HAVE_DECL_PACKET_HDRLEN) && HAVE_DECL_PACKET_HDRLEN)
  XLAT(PACKET_HDRLEN),
#endif
#if defined(PACKET_RESERVE) || (defined(HAVE_DECL_PACKET_RESERVE) && HAVE_DECL_PACKET_RESERVE)
  XLAT(PACKET_RESERVE),
#endif
#if defined(PACKET_TX_RING) || (defined(HAVE_DECL_PACKET_TX_RING) && HAVE_DECL_PACKET_TX_RING)
  XLAT(PACKET_TX_RING),
#endif
#if defined(PACKET_LOSS) || (defined(HAVE_DECL_PACKET_LOSS) && HAVE_DECL_PACKET_LOSS)
  XLAT(PACKET_LOSS),
#endif
#if defined(PACKET_VNET_HDR) || (defined(HAVE_DECL_PACKET_VNET_HDR) && HAVE_DECL_PACKET_VNET_HDR)
  XLAT(PACKET_VNET_HDR),
#endif
#if defined(PACKET_TX_TIMESTAMP) || (defined(HAVE_DECL_PACKET_TX_TIMESTAMP) && HAVE_DECL_PACKET_TX_TIMESTAMP)
  XLAT(PACKET_TX_TIMESTAMP),
#endif
#if defined(PACKET_TIMESTAMP) || (defined(HAVE_DECL_PACKET_TIMESTAMP) && HAVE_DECL_PACKET_TIMESTAMP)
  XLAT(PACKET_TIMESTAMP),
#endif
#if defined(PACKET_FANOUT) || (defined(HAVE_DECL_PACKET_FANOUT) && HAVE_DECL_PACKET_FANOUT)
  XLAT(PACKET_FANOUT),
#endif
#if defined(PACKET_TX_HAS_OFF) || (defined(HAVE_DECL_PACKET_TX_HAS_OFF) && HAVE_DECL_PACKET_TX_HAS_OFF)
  XLAT(PACKET_TX_HAS_OFF),
#endif
#if defined(PACKET_QDISC_BYPASS) || (defined(HAVE_DECL_PACKET_QDISC_BYPASS) && HAVE_DECL_PACKET_QDISC_BYPASS)
  XLAT(PACKET_QDISC_BYPASS),
#endif
#if defined(PACKET_ROLLOVER_STATS) || (defined(HAVE_DECL_PACKET_ROLLOVER_STATS) && HAVE_DECL_PACKET_ROLLOVER_STATS)
  XLAT(PACKET_ROLLOVER_STATS),
#endif
#if defined(PACKET_FANOUT_DATA) || (defined(HAVE_DECL_PACKET_FANOUT_DATA) && HAVE_DECL_PACKET_FANOUT_DATA)
  XLAT(PACKET_FANOUT_DATA),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
