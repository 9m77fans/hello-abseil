set(SOURCES hello.cc)
#add_library(hello_absl STATIC ${SOURCES})
add_executable(hello_absl ${SOURCES})
target_link_libraries(hello_absl absl::flat_hash_map)
