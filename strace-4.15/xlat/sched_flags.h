/* Generated by ../xlat/gen.sh from ../xlat/sched_flags.in; do not edit. */
#if !(defined(SCHED_FLAG_RESET_ON_FORK) || (defined(HAVE_DECL_SCHED_FLAG_RESET_ON_FORK) && HAVE_DECL_SCHED_FLAG_RESET_ON_FORK))
# define SCHED_FLAG_RESET_ON_FORK 1
#endif

#ifdef IN_MPERS

# error static const struct xlat sched_flags in mpers mode

#else

static
const struct xlat sched_flags[] = {
 XLAT(SCHED_FLAG_RESET_ON_FORK),
 XLAT_END
};

#endif /* !IN_MPERS */