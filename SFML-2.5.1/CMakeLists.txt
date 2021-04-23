add_library(SFML_Network STATIC
    src/SFML/Network/Unix/SocketImplUnix.cpp
    src/SFML/Network/Win32/SocketImplWin32.cpp
    src/SFML/Network/IpAddress.cpp
    src/SFML/Network/Packet.cpp
    src/SFML/Network/Socket.cpp
    src/SFML/Network/SocketSelector.cpp
    src/SFML/Network/TcpListener.cpp
    src/SFML/Network/TcpSocket.cpp
    src/SFML/Network/UdpSocket.cpp
    )
target_include_directories(SFML_Network
    PUBLIC
        include
    PRIVATE
        src
    )
