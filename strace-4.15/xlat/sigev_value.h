/* Generated by ../xlat/gen.sh from ../xlat/sigev_value.in; do not edit. */
#if !(defined(SIGEV_SIGNAL) || (defined(HAVE_DECL_SIGEV_SIGNAL) && HAVE_DECL_SIGEV_SIGNAL))
# define SIGEV_SIGNAL 0
#endif
#if !(defined(SIGEV_NONE) || (defined(HAVE_DECL_SIGEV_NONE) && HAVE_DECL_SIGEV_NONE))
# define SIGEV_NONE 1
#endif
#if !(defined(SIGEV_THREAD) || (defined(HAVE_DECL_SIGEV_THREAD) && HAVE_DECL_SIGEV_THREAD))
# define SIGEV_THREAD 2
#endif
#if !(defined(SIGEV_THREAD_ID) || (defined(HAVE_DECL_SIGEV_THREAD_ID) && HAVE_DECL_SIGEV_THREAD_ID))
# define SIGEV_THREAD_ID 4
#endif

#ifdef IN_MPERS

extern const struct xlat sigev_value[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat sigev_value[] = {
 XLAT(SIGEV_SIGNAL),
 XLAT(SIGEV_NONE),
 XLAT(SIGEV_THREAD),
 XLAT(SIGEV_THREAD_ID),
 XLAT_END
};

#endif /* !IN_MPERS */
