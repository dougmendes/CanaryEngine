add_library(CanaryEngine STATIC)

target_sources(CanaryEngine PRIVATE
    
 "include/Canary/Canary.h" "include/Canary/Core/Application.h" "include/Canary/Core/Application.cpp" "include/Canary/Core/EntryPoint.h" "include/Canary/Platform/Windows/WindowsWindow.h" "include/Canary/Core/Window.h" "include/Canary/Platform/Windows/WindowsWindow.cpp" "include/Canary/Core/Window.cpp")

target_include_directories(CanaryEngine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

find_package(glm CONFIG REQUIRED)
find_package(spdlog CONFIG REQUIRED)

target_link_libraries(CanaryEngine PUBLIC
    glm::glm
    spdlog::spdlog
)
