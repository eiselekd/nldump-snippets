/* Generated by ../xlat/gen.sh from ../xlat/sigsys_codes.in; do not edit. */
#if !(defined(SYS_SECCOMP) || (defined(HAVE_DECL_SYS_SECCOMP) && HAVE_DECL_SYS_SECCOMP))
# define SYS_SECCOMP 1
#endif

#ifdef IN_MPERS

extern const struct xlat sigsys_codes[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat sigsys_codes[] = {
 XLAT(SYS_SECCOMP),
 XLAT_END
};

#endif /* !IN_MPERS */
