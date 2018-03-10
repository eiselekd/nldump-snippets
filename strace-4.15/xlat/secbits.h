/* Generated by ../xlat/gen.sh from ../xlat/secbits.in; do not edit. */
#if !(defined(SECBIT_NOROOT) || (defined(HAVE_DECL_SECBIT_NOROOT) && HAVE_DECL_SECBIT_NOROOT))
# define SECBIT_NOROOT (1 << 0)
#endif
#if !(defined(SECBIT_NOROOT_LOCKED) || (defined(HAVE_DECL_SECBIT_NOROOT_LOCKED) && HAVE_DECL_SECBIT_NOROOT_LOCKED))
# define SECBIT_NOROOT_LOCKED (1 << 1)
#endif
#if !(defined(SECBIT_NO_SETUID_FIXUP) || (defined(HAVE_DECL_SECBIT_NO_SETUID_FIXUP) && HAVE_DECL_SECBIT_NO_SETUID_FIXUP))
# define SECBIT_NO_SETUID_FIXUP (1 << 2)
#endif
#if !(defined(SECBIT_NO_SETUID_FIXUP_LOCKED) || (defined(HAVE_DECL_SECBIT_NO_SETUID_FIXUP_LOCKED) && HAVE_DECL_SECBIT_NO_SETUID_FIXUP_LOCKED))
# define SECBIT_NO_SETUID_FIXUP_LOCKED (1 << 3)
#endif
#if !(defined(SECBIT_KEEP_CAPS) || (defined(HAVE_DECL_SECBIT_KEEP_CAPS) && HAVE_DECL_SECBIT_KEEP_CAPS))
# define SECBIT_KEEP_CAPS (1 << 4)
#endif
#if !(defined(SECBIT_KEEP_CAPS_LOCKED) || (defined(HAVE_DECL_SECBIT_KEEP_CAPS_LOCKED) && HAVE_DECL_SECBIT_KEEP_CAPS_LOCKED))
# define SECBIT_KEEP_CAPS_LOCKED (1 << 5)
#endif
#if !(defined(SECBIT_NO_CAP_AMBIENT_RAISE) || (defined(HAVE_DECL_SECBIT_NO_CAP_AMBIENT_RAISE) && HAVE_DECL_SECBIT_NO_CAP_AMBIENT_RAISE))
# define SECBIT_NO_CAP_AMBIENT_RAISE (1 << 6)
#endif
#if !(defined(SECBIT_NO_CAP_AMBIENT_RAISE_LOCKED) || (defined(HAVE_DECL_SECBIT_NO_CAP_AMBIENT_RAISE_LOCKED) && HAVE_DECL_SECBIT_NO_CAP_AMBIENT_RAISE_LOCKED))
# define SECBIT_NO_CAP_AMBIENT_RAISE_LOCKED (1 << 7)
#endif

#ifdef IN_MPERS

# error static const struct xlat secbits in mpers mode

#else

static
const struct xlat secbits[] = {
 XLAT(SECBIT_NOROOT),
 XLAT(SECBIT_NOROOT_LOCKED),
 XLAT(SECBIT_NO_SETUID_FIXUP),
 XLAT(SECBIT_NO_SETUID_FIXUP_LOCKED),
 XLAT(SECBIT_KEEP_CAPS),
 XLAT(SECBIT_KEEP_CAPS_LOCKED),
 XLAT(SECBIT_NO_CAP_AMBIENT_RAISE),
 XLAT(SECBIT_NO_CAP_AMBIENT_RAISE_LOCKED),
 XLAT_END
};

#endif /* !IN_MPERS */
