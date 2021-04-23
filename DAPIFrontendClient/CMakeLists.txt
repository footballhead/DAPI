add_library(DAPIFrontendClient STATIC
    ProtoClient.cpp
    )
# All includes for repo-specific code is relative so no target_include_directories

# So technically DAPILIB is a dependency because it's #include'd in a public
# header, except it's a circular dependency. Fortunately, this is a static
# library so linking is deferred. For now, it just needs the header for the
# struct definition.
target_link_libraries(DAPIFrontendClient
    PUBLIC
        DAPIBackendCore
        DAPILIB
    )
