if (NOT WIN32)
    message("DAPI Injector is windows only, ignoring...")
    return()
endif()

add_executable(DAPIInjector
    source/Injector.cpp
    source/main.cpp
    )
set_target_properties(DAPIInjector
    PROPERTIES
        WIN32_EXECUTABLE True
    )
