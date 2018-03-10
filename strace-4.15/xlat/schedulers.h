/* Generated by ../xlat/gen.sh from ../xlat/schedulers.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat schedulers in mpers mode

#else

static
const struct xlat schedulers[] = {
#if defined(SCHED_OTHER) || (defined(HAVE_DECL_SCHED_OTHER) && HAVE_DECL_SCHED_OTHER)
  XLAT(SCHED_OTHER),
#endif
#if defined(SCHED_FIFO) || (defined(HAVE_DECL_SCHED_FIFO) && HAVE_DECL_SCHED_FIFO)
  XLAT(SCHED_FIFO),
#endif
#if defined(SCHED_RR) || (defined(HAVE_DECL_SCHED_RR) && HAVE_DECL_SCHED_RR)
  XLAT(SCHED_RR),
#endif
#if defined(SCHED_BATCH) || (defined(HAVE_DECL_SCHED_BATCH) && HAVE_DECL_SCHED_BATCH)
  XLAT(SCHED_BATCH),
#endif
#if defined(SCHED_ISO) || (defined(HAVE_DECL_SCHED_ISO) && HAVE_DECL_SCHED_ISO)
  XLAT(SCHED_ISO),
#endif
#if defined(SCHED_IDLE) || (defined(HAVE_DECL_SCHED_IDLE) && HAVE_DECL_SCHED_IDLE)
  XLAT(SCHED_IDLE),
#endif
#if defined(SCHED_DEADLINE) || (defined(HAVE_DECL_SCHED_DEADLINE) && HAVE_DECL_SCHED_DEADLINE)
  XLAT(SCHED_DEADLINE),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
