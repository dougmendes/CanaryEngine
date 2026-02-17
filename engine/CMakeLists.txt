add_library(CanaryEngine STATIC)

target_sources(CanaryEngine PRIVATE
    src/main_engine_dummy.cpp
 "include/Canary/Canary.h")

target_include_directories(CanaryEngine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

find_package(glm CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

target_link_libraries(CanaryEngine PUBLIC
    glm::glm
    spdlog::spdlog
)
