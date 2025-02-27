if(CONFIG_WOLFSSL)
  zephyr_interface_library_named(wolfSSL)
  
  if(CONFIG_WOLFSSL_BUILTIN)
    target_compile_definitions(wolfSSL INTERFACE
  	WOLFSSL_OPTIONS_FILE="${CONFIG_WOLFSSL_OPTIONS_FILE}"
  	)
  
    target_include_directories(wolfSSL INTERFACE
  	${ZEPHYR_CURRENT_MODULE_DIR}
  	${ZEPHYR_CURRENT_MODULE_DIR}/wolfssl
  	${ZEPHYR_CURRENT_MODULE_DIR}/zephyr
  	)
  
    zephyr_library()
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/zephyr/zephyr_init.c)
  
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/crl.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/internal.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/keys.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/ocsp.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/sniffer.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/ssl.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/tls13.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/tls.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/src/wolfio.c)
  
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/aes.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/arc4.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/asm.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/asn.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/async.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/blake2b.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/camellia.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/chacha20_poly1305.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/chacha.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/cmac.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/coding.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/compress.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/cpuid.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/cryptocb.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/curve25519.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/des3.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/dh.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/dsa.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ecc.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ecc_fp.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ed25519.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/error.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/fe_low_mem.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/fe_operations.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/fips.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/fips_test.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ge_low_mem.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ge_operations.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/hash.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/hc128.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/hmac.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/idea.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/integer.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/logging.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/md2.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/md4.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/md5.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/memory.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/misc.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/pkcs12.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/pkcs7.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/poly1305.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/pwdbased.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/rabbit.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/random.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/ripemd.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/rsa.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/selftest.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sha256.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sha3.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sha512.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sha.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/signature.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_arm32.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_arm64.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_armthumb.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_c32.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_c64.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_cortexm.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_int.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/sp_x86_64.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/srp.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/tfm.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wc_encrypt.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wc_pkcs11.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wc_port.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wolfcrypt_first.c)
    #zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wolfcrypt_last.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wolfevent.c)
    zephyr_library_sources(${ZEPHYR_CURRENT_MODULE_DIR}/wolfcrypt/src/wolfmath.c)
  
    zephyr_library_link_libraries(wolfSSL)
  
    add_definitions(-DWOLFSSL_USER_SETTINGS)
    add_definitions(-DWOLFSSL_ZEPHYR)
    include_directories("${ZEPHYR_CURRENT_MODULE_DIR}/wolfssl")
  else()
    assert(CONFIG_WOLFSSL_LIBRARY "wolfSSL was enabled, but neither BUILTIN or LIBRARY was selected.")
  
    # NB: CONFIG_WOLFSSL_LIBRARY is not regression tested and is
    # therefore susceptible to bit rot
  
    target_include_directories(wolfSSL INTERFACE
  	${CONFIG_WOLFSSL_INSTALL_PATH}
  	)
  
    zephyr_link_libraries(
      wolfssl_external
      -L${CONFIG_WOLFSSL_INSTALL_PATH}
      gcc
      )
    # Lib wolfssl depends on libgcc so to allow
    # wolfssl to link with gcc we need to ensure it is placed
    # after wolfssl_external on the linkers command line.
  endif()
  
  target_link_libraries(wolfSSL INTERFACE zephyr_interface)

endif()
