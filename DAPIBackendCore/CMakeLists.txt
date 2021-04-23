add_library(DAPIBackendCore STATIC
    DAPIProtoClient.cpp
    )
# All includes for repo-specific code is relative so no target_include_directories
target_link_libraries(DAPIBackendCore
    PUBLIC
        SFML_Network
        Messages
    )
