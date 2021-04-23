cmake_minimum_required(VERSION 3.14)
project(DAPI C CXX)

#
# Third-party
#

add_subdirectory(SFML-2.5.1)
add_subdirectory(libprotobuf-lite)

#
# Core libraries
#

add_subdirectory(Messages)
add_subdirectory(DAPIBackendCore)
add_subdirectory(DAPIFrontendClient)
add_subdirectory(DAPILIB)

#
# Backend: DAPI.DLL and Injector
#

add_subdirectory("DAPI Injector")
add_subdirectory(DAPI)

#
# Frontend: Clients
#

add_subdirectory(ExampleAIClient)
