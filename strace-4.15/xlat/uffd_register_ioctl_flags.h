/* Generated by ../xlat/gen.sh from ../xlat/uffd_register_ioctl_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat uffd_register_ioctl_flags in mpers mode

#else

static
const struct xlat uffd_register_ioctl_flags[] = {
#if defined(_UFFDIO_WAKE) || (defined(HAVE_DECL__UFFDIO_WAKE) && HAVE_DECL__UFFDIO_WAKE)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_WAKE, "1<<_UFFDIO_WAKE"),
#endif
#if defined(_UFFDIO_COPY) || (defined(HAVE_DECL__UFFDIO_COPY) && HAVE_DECL__UFFDIO_COPY)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_COPY, "1<<_UFFDIO_COPY"),
#endif
#if defined(_UFFDIO_ZEROPAGE) || (defined(HAVE_DECL__UFFDIO_ZEROPAGE) && HAVE_DECL__UFFDIO_ZEROPAGE)
  XLAT_TYPE_PAIR(uint64_t, 1ULL<<_UFFDIO_ZEROPAGE, "1<<_UFFDIO_ZEROPAGE"),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
