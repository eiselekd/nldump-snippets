/* Generated by ../xlat/gen.sh from ../xlat/sysctl_net_ipv6_route.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat sysctl_net_ipv6_route in mpers mode

#else

static
const struct xlat sysctl_net_ipv6_route[] = {
 XLAT(NET_IPV6_ROUTE_FLUSH),
 XLAT(NET_IPV6_ROUTE_GC_THRESH),
 XLAT(NET_IPV6_ROUTE_MAX_SIZE),
 XLAT(NET_IPV6_ROUTE_GC_MIN_INTERVAL),
 XLAT(NET_IPV6_ROUTE_GC_TIMEOUT),
 XLAT(NET_IPV6_ROUTE_GC_INTERVAL),
 XLAT(NET_IPV6_ROUTE_GC_ELASTICITY),
 XLAT(NET_IPV6_ROUTE_MTU_EXPIRES),
 XLAT(NET_IPV6_ROUTE_MIN_ADVMSS),
#if defined(NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS) || (defined(HAVE_DECL_NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS) && HAVE_DECL_NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS)
  XLAT(NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
