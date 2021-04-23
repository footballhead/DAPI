add_library(DAPI SHARED
    Source/Detours.cpp
    Source/DLLMain.cpp
    Source/Server.cpp
    )
target_link_libraries(DAPI
    PUBLIC
        DAPIBackendCore
    )
