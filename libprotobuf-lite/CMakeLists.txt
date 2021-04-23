# libprotobuf-lite.cmake was (independently?) downstreamed but is part of a
# larger protobuf cmake infra. So we have to declare some missing vars.

if (MSVC)
  # Add the "lib" prefix for generated .lib outputs.
  set(LIB_PREFIX lib)
else (MSVC)
  # When building with "make", "lib" prefix will be added automatically by
  # the build tool.
  set(LIB_PREFIX)
endif (MSVC)

set(protobuf_source_dir .)
set(protobuf_SHARED_OR_STATIC STATIC)
set(protobuf_VERSION "3.6.0")
set(protobuf_DEBUG_POSTFIX "d")

include(libprotobuf-lite.cmake)
