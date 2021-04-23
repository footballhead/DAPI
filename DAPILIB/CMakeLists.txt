add_library(DAPILIB STATIC
    source/Command.cpp
    source/Game.cpp
    source/Item.cpp
    source/Player.cpp
    source/PlayerData.cpp
    source/Portal.cpp
    source/Spell.cpp
    source/Tile.cpp
    source/Towner.cpp
    )
# All includes for repo-specific code is relative so no target_include_directories

# So technically DAPIFrontendClient is a dependency because it's #include'd in a
# public header, except it's a circular dependency. Fortunately, this is a
# static library so linking is deferred. For now, it just needs the header for
# the struct definitions.
target_link_libraries(DAPILIB
    PUBLIC
        DAPIFrontendClient
    )
