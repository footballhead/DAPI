# TODO: run protoc on proto files

add_library(Messages STATIC
    generated/cpp/command.pb.cc
    generated/cpp/data.pb.cc
    generated/cpp/game.pb.cc
    generated/cpp/init.pb.cc
    generated/cpp/message.pb.cc
    )
target_include_directories(Messages
    PUBLIC
        generated
    )
target_link_libraries(Messages
    PUBLIC
        protobuf::libprotobuf-lite
    )
