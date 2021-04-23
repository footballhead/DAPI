add_executable(ExampleAIClient
    main.cpp
    )

# These must be built from the .sln first
# TODO: Total cmake conversion!!!!1!11!
target_link_libraries(ExampleAIClient
    DAPIFrontendClient
    DAPILIB
    )
